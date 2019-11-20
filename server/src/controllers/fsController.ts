import { Request, Response } from 'express';
import { SERVFAIL } from 'dns';
const database = require('../database');

export interface folderData{
    id: number;
    name: string;
    father: number;
}

class FileController {

    async getFileSystem(req: Request, res: Response){
        const { id } = req.params;
        let query = `SELECT id FROM sistema_archivos WHERE id_part = ${id}`;
        const result = await database.simpleExecute(query);
        let query2 = `SELECT * FROM carpeta WHERE fs = ${result.rows[0].ID}`;
        const result2 = await database.simpleExecute(query2);
        let data: any = [];
        for(let i = 0; i < result2.rows.length; i++){
            data.push({
                id: result2.rows[i].ID,
                name: result2.rows[i].NOMBRE,
                father: result2.rows[i].PADRE,
                type: 'folder'
                });
        }
        let aux: number = data.length;
        for(let i = 0; i < aux; i++){
            let query = `SELECT * FROM archivo WHERE carpeta = ${data[i].id}`
            const result = await database.simpleExecute(query);
            if(result.rows.length > 0){
                for(let j = 0; j < result.rows.length; j++){
                    data.push({
                        id: result.rows[j].ID,
                        name: result.rows[j].NOMBRE,
                        father: result.rows[j].CARPETA,
                        type: 'file'
                    });
                }
                
            }
            
        }
        res.json(data);
    }

    async createFolder(req: Request, res: Response){
        const {name, father, id} = req.body;
        let query = `SELECT id FROM sistema_archivos WHERE id_part = ${id}`;
        const result = await database.simpleExecute(query);
        let query2 = `INSERT INTO carpeta(nombre,padre,fs) VALUES('${name}',${father},${result.rows[0].ID})`;
        const result2 = await database.simpleExecute(query2);
        res.json({Response: "Folder created"});
    }
    
    async createFile(req: Request, res: Response){
        const { name, father } = req.body;
        let query = `INSERT INTO archivo(nombre,carpeta) VALUES ('${name}',${father})`;
        const result = await database.simpleExecute(query);
        res.json({Response: "File created"});
    }

    async getFolder(req: Request, res: Response){
        let query = `SELECT * FROM carpeta WHERE padre = ${req.params.id}`;
        let query2 = `SELECT * FROM archivo WHERE carpeta = ${req.params.id}`;
        const result = await database.simpleExecute(query);
        const result2 = await database.simpleExecute(query2);
        let data: any = [];
        if(result.rows.length > 0){
            for(let i = 0; i < result.rows.length; i++){
                data.push({
                    name: result.rows[i].NOMBRE,
                    type: 'folder'
                });
            }
        }
        if(result2.rows.length > 0){
            for(let i = 0; i < result2.rows.length; i++){
                data.push({
                    name: result2.rows[i].NOMBRE,
                    content: result2.rows[i].CONTENIDO,
                    type: 'file'
                });
            }
        }
        res.json(data);
    }

    async getFile(req: Request, res: Response){
        let query = `SELECT * FROM archivo WHERE id = ${req.params.id}`;
        const result = await database.simpleExecute(query);
        const data = {
            id: result.rows[0].ID,
            name: result.rows[0].NOMBRE,
            content: result.rows[0].CONTENIDO,
            father: result.rows[0].CARPETA
        }
        res.json(data);
    }

    async updateFile(req: Request, res: Response){
        const { id, content } = req.body;
        let query = `UPDATE archivo
                     SET contenido = '${content}'
                     WHERE id = ${id}`;
        const result = await database.simpleExecute(query);
        res.json({Response: "Succesfully saved"})
    }

    async deleteFolder(req: Request, res: Response){
        let query = `DELETE FROM carpeta WHERE id = ${req.params.id}`;
        const result = await database.simpleExecute(query);
        res.json({Response: "Folder deleted"});
    }

    async deleteFile(req: Request, res: Response){
        let query = `DELETE FROM archivo WHERE id = ${req.params.id}`;
        const result = await database.simpleExecute(query);
        res.json({Response: "File deleted"});
    }

    async renameFolder(req: Request, res: Response){
        const { id, name } = req.body;
        let query = `UPDATE carpeta
                     SET nombre = '${name}'
                     WHERE id = ${id}`;
        const result = await database.simpleExecute(query);
        res.json({Response: "Folder renamed"});
    }

    async renameFile(req: Request, res: Response){
        const { id, name } = req.body;
        let query = `UPDATE archivo
                     SET nombre = '${name}'
                     WHERE id = ${id}`;
        const result = await database.simpleExecute(query);
        res.json({Response: "Folder renamed"});
    }

}

export const fsController = new FileController();