import { Request, Response } from 'express';
const database = require('../database');

class AdminController{

    async getHomeData(req: Request, res:Response){
        let query = `SELECT * FROM homePage`;
        const result = await database.simpleExecute(query);
        res.send(result.rows[0]);
    }

    async updateHomeData(req: Request, res: Response){
        let query = `UPDATE homePage 
                     SET 
                        nombre = '${req.body.NOMBRE}',
                        eslogan = '${req.body.ESLOGAN}',
                        mision = '${req.body.MISION}',
                        vision = '${req.body.VISION}',
                        about = '${req.body.ABOUT}'`
        const result = await database.simpleExecute(query);
        res.json({Response: 'Succesfully updated'});
    }

    async report1(req: Request, res: Response){
        let query = `SELECT *
                     FROM usuario
                     WHERE fecha_nacimiento > ${req.body.fecha}`;
        const result = await database.simpleExecute(query);
        console.log(result);
    }

}

export const adminController = new AdminController();