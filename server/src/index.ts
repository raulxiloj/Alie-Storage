import express, { Application } from 'express';
import morgan from 'morgan';
import cors from 'cors';
import path from 'path';

import indexRoutes from './routes/indexRoutes';
import userRoutes from './routes/userRoutes';
import adminRoutes from './routes/adminRoutes';
import fsRoutes from './routes/fsRoutes';

const database = require('./routes/database');

class Server{

    public app: Application;

    constructor(){
        this.app = express();
        this.config();
        this.routes();
    }
    
    config(): void{
        this.app.set('port', 3000);
        this.app.use(morgan('dev'));//middleware
        this.app.use(cors());
        this.app.use(express.json());
        this.app.use(express.urlencoded({extended:false}));
        this.app.use('/uploads',express.static(path.resolve('uploads')))
    }

    routes(): void{
        this.app.use('/user',userRoutes);
        this.app.use('/admin',adminRoutes);
        this.app.use('/fs',fsRoutes);
    }

    start(): void{
        database.initialize();
        this.app.listen(this.app.get('port'), () => {
            console.log('Server on port ', this.app.get('port'));
        });
    }

}

const server = new Server();
server.start();


