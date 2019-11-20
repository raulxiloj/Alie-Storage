import { Router } from 'express';
import { adminController } from '../controllers/adminController'

class AdminRoutes{
    
    router: Router = Router();
    
    constructor(){
        this.config();
    }
    
    config(): void{
        this.router.get('/getHomeData',adminController.getHomeData);
        this.router.put('/updateHomeData',adminController.updateHomeData);
    }

}

const adminRoutes = new AdminRoutes();
export default adminRoutes.router;