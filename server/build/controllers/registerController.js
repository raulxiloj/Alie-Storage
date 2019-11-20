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
class RegisterController {
    list(req, res) {
        return __awaiter(this, void 0, void 0, function* () {
            let query = `SELECT * FROM usuario`;
            const result = yield database.simpleExecute(query);
            res.json(result);
        });
    }
    getOne(req, res) {
        res.json({ text: 'User ' + req.params.id });
    }
    create(req, res) {
        return __awaiter(this, void 0, void 0, function* () {
            console.log(req.body);
            let query = `INSERT INTO usuario (username,clave) VALUES ('${req.body.username}','${req.body.clave}')`;
            const result = yield database.simpleExecute(query);
            //mailService(req.body.email);
            res.json({ text: "User created" });
        });
    }
    delete(req, res) {
        res.json({ text: 'deleting user ' + req.params.id });
    }
    update(req, res) {
        res.json({ text: 'Updating user ' + req.params.id });
    }
}
exports.registerController = new RegisterController();
