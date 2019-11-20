import { Router } from 'express';
import { fsController } from '../controllers/fsController'


class fileRoutes{
    
    router: Router = Router();
    
    constructor(){
        this.config();
    }
    
    config(): void{
        this.router.get('/:id',fsController.getFileSystem);
        this.router.post('/createFolder',fsController.createFolder)
        this.router.post('/createFile',fsController.createFile);
        this.router.get('/getFolder/:id',fsController.getFolder);
        this.router.get('/getFile/:id',fsController.getFile);
        this.router.put('/updateFile/',fsController.updateFile);
        this.router.put('/renameFolder',fsController.renameFolder);
        this.router.put('/renameFile',fsController.renameFile);
        this.router.delete('/deleteFolder/:id',fsController.deleteFolder);
        this.router.delete('/deleteFile/:id',fsController.deleteFile);
    }

}

const fsRoutes = new fileRoutes();
export default fsRoutes.router;