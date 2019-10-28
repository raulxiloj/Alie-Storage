"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const express_1 = require("express");
class RegisterRoutes {
    constructor() {
        this.router = express_1.Router();
        this.config();
    }
    config() {
        this.router.get('/', (req, res) => res.send('Games'));
    }
}
const registerRoutes = new RegisterRoutes();
exports.default = registerRoutes.router;
