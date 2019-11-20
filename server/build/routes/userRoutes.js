"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const express_1 = require("express");
const userController_1 = require("../controllers/userController");
const multer_1 = __importDefault(require("../libs/multer"));
class UserRoutes {
    constructor() {
        this.router = express_1.Router();
        this.config();
    }
    config() {
        this.router.post('/register', multer_1.default.single('image'), userController_1.userController.register);
        this.router.post('/registerConsole', userController_1.userController.registerFromConsole);
        this.router.put('/activate/', userController_1.userController.activate);
        this.router.post('/signIn', userController_1.userController.signIn);
        this.router.get('/getUser/:username', userController_1.userController.getUser);
        this.router.put('/update', userController_1.userController.update);
        this.router.post('/syncronice', userController_1.userController.syncroniceData);
    }
}
const userRoutes = new UserRoutes();
exports.default = userRoutes.router;
