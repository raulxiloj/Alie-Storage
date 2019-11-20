"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const express_1 = require("express");
const adminController_1 = require("../controllers/adminController");
class AdminRoutes {
    constructor() {
        this.router = express_1.Router();
        this.config();
    }
    config() {
        this.router.get('/getHomeData', adminController_1.adminController.getHomeData);
        this.router.put('/updateHomeData', adminController_1.adminController.updateHomeData);
    }
}
const adminRoutes = new AdminRoutes();
exports.default = adminRoutes.router;
