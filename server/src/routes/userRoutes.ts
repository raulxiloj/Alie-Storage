import { Router } from 'express';
import { userController } from '../controllers/userController'
import multer from '../libs/multer'


class UserRoutes{
    
    router: Router = Router();
    
    constructor(){
        this.config();
    }
    
    config(): void{
        this.router.post('/register',multer.single('image'),userController.register);
        this.router.post('/registerConsole',userController.registerFromConsole);
        this.router.put('/activate/',userController.activate);
        this.router.post('/signIn',userController.signIn);
        this.router.get('/getUser/:username',userController.getUser);
        this.router.put('/update',userController.update)
        this.router.post('/syncronice',userController.syncroniceData);
    }

}

const userRoutes = new UserRoutes();
export default userRoutes.router;