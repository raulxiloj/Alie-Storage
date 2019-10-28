import { Router } from 'express';

class RegisterRoutes{
    
    router: Router = Router();
    
    constructor(){
        this.config();
    }
    
    config(): void{
        this.router.get('/',(req,res)=> res.send('Games'))
    }

}

const registerRoutes = new RegisterRoutes();
export default registerRoutes.router;