import { Request, Response } from 'express';
const database = require('../routes/database');

class IndexController {

    async index (req:Request,res:Response){
        const result = await database.simpleExecute('select user, systimestamp from dual');
        const user = result.rows[0].USER;
        const date = result.rows[0].SYSTIMESTAMP;
        res.end(`DB user: ${user}\nDate: ${date}`);
    } 
}

export const indexController = new IndexController();