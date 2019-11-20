"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const express_1 = require("express");
const fsController_1 = require("../controllers/fsController");
class fileRoutes {
    constructor() {
        this.router = express_1.Router();
        this.config();
    }
    config() {
        this.router.get('/:id', fsController_1.fsController.getFileSystem);
        this.router.post('/createFolder', fsController_1.fsController.createFolder);
        this.router.post('/createFile', fsController_1.fsController.createFile);
        this.router.get('/getFolder/:id', fsController_1.fsController.getFolder);
        this.router.get('/getFile/:id', fsController_1.fsController.getFile);
        this.router.put('/updateFile/', fsController_1.fsController.updateFile);
        this.router.put('/renameFolder', fsController_1.fsController.renameFolder);
        this.router.put('/renameFile', fsController_1.fsController.renameFile);
        this.router.delete('/deleteFolder/:id', fsController_1.fsController.deleteFolder);
        this.router.delete('/deleteFile/:id', fsController_1.fsController.deleteFile);
    }
}
const fsRoutes = new fileRoutes();
exports.default = fsRoutes.router;
