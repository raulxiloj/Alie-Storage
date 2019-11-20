"use strict";
var __awaiter = (this && this.__awaiter) || function (thisArg, _arguments, P, generator) {
    function adopt(value) { return value instanceof P ? value : new P(function (resolve) { resolve(value); }); }
    return new (P || (P = Promise))(function (resolve, reject) {
        function fulfilled(value) { try { step(generator.next(value)); } catch (e) { reject(e); } }
        function rejected(value) { try { step(generator["throw"](value)); } catch (e) { reject(e); } }
        function step(result) { result.done ? resolve(result.value) : adopt(result.value).then(fulfilled, rejected); }
        step((generator = generator.apply(thisArg, _arguments || [])).next());
    });
};
Object.defineProperty(exports, "__esModule", { value: true });
const database = require('../database');
class AdminController {
    getHomeData(req, res) {
        return __awaiter(this, void 0, void 0, function* () {
            let query = `SELECT * FROM homePage`;
            const result = yield database.simpleExecute(query);
            res.send(result.rows[0]);
        });
    }
    updateHomeData(req, res) {
        return __awaiter(this, void 0, void 0, function* () {
            let query = `UPDATE homePage 
                     SET 
                        nombre = '${req.body.NOMBRE}',
                        eslogan = '${req.body.ESLOGAN}',
                        mision = '${req.body.MISION}',
                        vision = '${req.body.VISION}',
                        about = '${req.body.ABOUT}'`;
            const result = yield database.simpleExecute(query);
            res.json({ Response: 'Succesfully updated' });
        });
    }
}
exports.adminController = new AdminController();
