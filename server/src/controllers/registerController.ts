import { Request, Response } from 'express';
const database = require('../database');

class RegisterController {

    async list (req:Request,res:Response){
        let query = `SELECT * FROM usuario`;
        const result = await database.simpleExecute(query);
        res.json(result);
    } 

    getOne(req:Request, res:Response){
        res.json({text : 'User ' + req.params.id});
    }

    async create(req:Request,res:Response){
        console.log(req.body);
        let query = `INSERT INTO usuario (username,clave) VALUES ('${req.body.username}','${req.body.clave}')`;
        const result = await database.simpleExecute(query);
        res.json({text: "User created"});
    }

    delete (req: Request, res:Response){
        res.json({text: 'deleting user ' + req.params.id});
    }

    public update(req: Request, res:Response){
        res.json({text: 'Updating user ' + req.params.id});
    }
}

export const registerController = new RegisterController();