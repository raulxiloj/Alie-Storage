import { Router } from 'express';
import { registerController } from '../controllers/registerController'

class RegisterRoutes{
    
    router: Router = Router();
    
    constructor(){
        this.config();
    }
    
    config(): void{
        this.router.get('/',registerController.list);
        this.router.get('/:id',registerController.getOne);
        this.router.post('/',registerController.create);
        this.router.put('/:id',registerController.update)
        this.router.delete('/:id',registerController.delete);
    }

}

const registerRoutes = new RegisterRoutes();
export default registerRoutes.router;