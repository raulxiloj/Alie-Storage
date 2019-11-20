import { Request, Response } from 'express';
import mailService from '../mailjet/mailService'
const database = require('../database');
const jwt = require('jsonwebtoken');
const bcrypt = require('bcryptjs');
const SECRET_KEY = 'secretkey123456';

class UserController {

    async register(req:Request,res:Response){
        const { nombre, apellido, username, clave, correo, telefono, direccion, genero, fecha_nacimiento, estado} = req.body;
        const fotografia  = req.file.path;
        //Register user
        let query = `INSERT INTO usuario (nombre,apellido,username,clave,correo,telefono,direccion,genero,fotografia,fecha_nacimiento,estado,tipo) 
                     VALUES ('${nombre}','${apellido}','${username}','${clave}','${correo}',${telefono},'${direccion}','${genero}','${fotografia}',to_date('${fecha_nacimiento}','YYYY-MM-DD'),'${estado}',1)`;           
        await database.simpleExecute(query);
        //Assign a disk 
        let query2 = `INSERT INTO disco (nombre,tamano) VALUES ('${username}.disk',20)`;
        await database.simpleExecute(query2);
        let query3 = `SELECT id FROM disco WHERE nombre = '${username}.disk'
                      UNION
                      SELECT id FROM usuario WHERE username = '${username}'`;
        const result3 = await database.simpleExecute(query3);   
        //Create a partition
        let query4 = `INSERT INTO particion(nombre,tamano,id_disco,id_usuario)
                      VALUES ('Part1',5,${result3.rows[1].ID},${result3.rows[0].ID})`;
        await database.simpleExecute(query4);        
        //Create file system
        let query5 = `SELECT id FROM particion WHERE id_usuario = ${result3.rows[0].ID}`;
        const result5 = await database.simpleExecute(query5);
        let query6 = `INSERT INTO sistema_archivos (tipo, id_part)
                      VALUES (3,${result5.rows[0].ID})`;
        await database.simpleExecute(query6);
        //Create the root folder
        let query7 = `SELECT id FROM sistema_archivos WHERE id_part = ${result5.rows[0].ID}`;
        const result7 = await database.simpleExecute(query7);
        let query8 = `INSERT INTO carpeta (nombre,fs) VALUES('/',${result7.rows[0].ID})`
        await database.simpleExecute(query8);
        //Send confirmation mail
        mailService(req.body.nombre,req.body.correo,req.body.clave);
        res.json({text: "User created"});
    }

    async activate(req:Request,res:Response){
        let query = `SELECT * FROM usuario WHERE username = '${req.body.username}'`;
        const res1 = await database.simpleExecute(query);
        if(res1.rows.length > 0){
            if(res1.rows[0].CLAVE === req.body.clave){
                let query2 = `UPDATE usuario SET estado = 1 WHERE username = '${req.body.username}'`
                const result = await database.simpleExecute(query2);
                res.json({response: "User activated"});
            }else
                res.status(500).json({Error: "Wrong password"});
        }
    }

    async signIn(req:Request,res:Response){
        let query = `SELECT * FROM usuario WHERE username = '${req.body.username}'`;
        const result = await database.simpleExecute(query);
        if(result.rows.length > 0){
            if(result.rows[0].ESTADO == 1){
                const accessToken = jwt.sign({id: result.rows[0].ID},SECRET_KEY);
                const dataUser = {
                    user: result.rows[0].USERNAME,
                    accessToken: accessToken,
                    tipo: result.rows[0].TIPO
                }
                if(result.rows[0].CLAVE === req.body.clave){
                    res.send(dataUser);
                }else
                    res.status(501).json({Error: "Wrong password"});
            }else
                res.status(500).json({Error:"Inactive user"});
        }else
        res.status(404).json({Error: "The user doesn't exists"});
    }
    
    async registerFromConsole(req:Request, res:Response){
        const { username, clave } = req.body;
        //Register user
        let query = `INSERT INTO usuario (username,clave,estado,tipo)
                     VALUES('${username}','${clave}',1,1)`
        const result = await database.simpleExecute(query);
        //Assing a disk
        let query2 = `INSERT INTO disco (nombre,tamano) VALUES ('${username}.disk',20)`;
        await database.simpleExecute(query2);
        let query3 = `SELECT id FROM disco WHERE nombre = '${username}.disk'
                      UNION
                      SELECT id FROM usuario WHERE username = '${username}'`;
        const result3 = await database.simpleExecute(query3); 
        //Create a partition
        let query4 = `INSERT INTO particion(nombre,tamano,id_disco,id_usuario)
                      VALUES ('Part1',5,${result3.rows[1].ID},${result3.rows[0].ID})`;
        await database.simpleExecute(query4);   
        //Create file system
        let query5 = `SELECT id FROM particion WHERE id_usuario = ${result3.rows[0].ID}`;
        const result5 = await database.simpleExecute(query5);
        let query6 = `INSERT INTO sistema_archivos (tipo, id_part)
                      VALUES (3,${result5.rows[0].ID})`;
        await database.simpleExecute(query6);
        //Create the root folder
        let query7 = `SELECT id FROM sistema_archivos WHERE id_part = ${result5.rows[0].ID}`;
        const result7 = await database.simpleExecute(query7);
        let query8 = `INSERT INTO carpeta (nombre,fs) VALUES('/',${result7.rows[0].ID})`
        await database.simpleExecute(query8);
        res.json({fs:`${result7.rows[0].ID}`});
    }

    async syncroniceData(req: Request, res: Response){
        const { username, nombre, tipo, padre } = req.body; 
        let query = `SELECT id 
                     FROM sistema_archivos
                     WHERE id_part IN (
                         SELECT id
                         FROM particion
                         WHERE id_usuario IN(
                             SELECT id
                             FROM usuario
                             WHERE username = '${username}')
                         AND nombre = 'Part1')`;
        const result = await database.simpleExecute(query);
        console.log(result);
        if(padre.length === 0){
            if(tipo === 'C'){
                let query = `SELECT id
                             FROM carpeta 
                             WHERE nombre = '/'
                             AND fs = ${result.rows[0].ID}`;
                const idPadre = await database.simpleExecute(query);
                let insertQuery = `INSERT INTO carpeta(nombre,padre,fs) 
                                  VALUES ('${nombre}',${idPadre.rows[0].ID},${result.rows[0].ID})`;
                const res = await database.simpleExecute(insertQuery);
            }
        }else{
            if(tipo === 'C'){
                let query = `SELECT id
                             FROM carpeta 
                             WHERE nombre = '${padre}'
                             AND fs = ${result.rows[0].ID}`;
                const idPadre = await database.simpleExecute(query);
                console.log(idPadre.rows);
                let insertQuery = `INSERT INTO carpeta(nombre,padre,fs)
                                   VALUES ('${nombre}',${idPadre.rows[0].ID},${result.rows[0].ID})`;
                const res = await database.simpleExecute(insertQuery);
            }
        }
        res.json({Response: "nice"})
    }

    async getUser(req:Request, res:Response){
        const { username } = req.params;
        let query = `SELECT * FROM usuario WHERE username = '${username}'`
        const result = await database.simpleExecute(query);
        let query2 = `SELECT * FROM particion WHERE id_usuario = ${result.rows[0].ID}`;
        let result2 = await database.simpleExecute(query2);
        let partitions = [];
        for (let i = 0; i < result2.rows.length; i++) 
            partitions.push(result2.rows[i]);
        if(result.rows.length > 0){
            let date = new Date(`${result.rows[0].FECHA_REGISTRO}`);
            let dateFormat: string = '';
            const dataUser = {
                firstname: result.rows[0].NOMBRE,
                lastname: result.rows[0].APELLIDO,
                username: result.rows[0].USERNAME,
                password: result.rows[0].CLAVE,
                email: result.rows[0].CORREO,
                phone: result.rows[0].TELEFONO,  
                address: result.rows[0].DIRECCION,
                register_date: dateFormat.concat(date.getDate().toString(),'/',(date.getMonth() + 1).toString(), '/' ,date.getFullYear().toString()),
                photo: result.rows[0].FOTOGRAFIA,
                partitions: partitions
            }
            res.send(dataUser);
        }
    }

    async update(req: Request, res:Response){
        const { firstname, lastname, email, phone, address, password, username } = req.body;
        let query = `UPDATE usuario
                     SET 
                        nombre = '${firstname}',
                        apellido = '${lastname}',
                        correo = '${email}',
                        telefono = ${phone},
                        direccion = '${address}',
                        clave = '${password}'
                     WHERE username = '${username}'`;
        await database.simpleExecute(query);
        res.json({text: 'User updated'});
    }

}

export const userController = new UserController();