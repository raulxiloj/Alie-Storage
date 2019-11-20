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
class FileController {
    getFileSystem(req, res) {
        return __awaiter(this, void 0, void 0, function* () {
            const { id } = req.params;
            let query = `SELECT id FROM sistema_archivos WHERE id_part = ${id}`;
            const result = yield database.simpleExecute(query);
            let query2 = `SELECT * FROM carpeta WHERE fs = ${result.rows[0].ID}`;
            const result2 = yield database.simpleExecute(query2);
            let data = [];
            for (let i = 0; i < result2.rows.length; i++) {
                data.push({
                    id: result2.rows[i].ID,
                    name: result2.rows[i].NOMBRE,
                    father: result2.rows[i].PADRE,
                    type: 'folder'
                });
            }
            let aux = data.length;
            for (let i = 0; i < aux; i++) {
                let query = `SELECT * FROM archivo WHERE carpeta = ${data[i].id}`;
                const result = yield database.simpleExecute(query);
                if (result.rows.length > 0) {
                    for (let j = 0; j < result.rows.length; j++) {
                        data.push({
                            id: result.rows[j].ID,
                            name: result.rows[j].NOMBRE,
                            father: result.rows[j].CARPETA,
                            type: 'file'
                        });
                    }
                }
            }
            res.json(data);
        });
    }
    createFolder(req, res) {
        return __awaiter(this, void 0, void 0, function* () {
            const { name, father, id } = req.body;
            let query = `SELECT id FROM sistema_archivos WHERE id_part = ${id}`;
            const result = yield database.simpleExecute(query);
            let query2 = `INSERT INTO carpeta(nombre,padre,fs) VALUES('${name}',${father},${result.rows[0].ID})`;
            const result2 = yield database.simpleExecute(query2);
            res.json({ Response: "Folder created" });
        });
    }
    createFile(req, res) {
        return __awaiter(this, void 0, void 0, function* () {
            const { name, father } = req.body;
            let query = `INSERT INTO archivo(nombre,carpeta) VALUES ('${name}',${father})`;
            const result = yield database.simpleExecute(query);
            res.json({ Response: "File created" });
        });
    }
    getFolder(req, res) {
        return __awaiter(this, void 0, void 0, function* () {
            let query = `SELECT * FROM carpeta WHERE padre = ${req.params.id}`;
            let query2 = `SELECT * FROM archivo WHERE carpeta = ${req.params.id}`;
            const result = yield database.simpleExecute(query);
            const result2 = yield database.simpleExecute(query2);
            let data = [];
            if (result.rows.length > 0) {
                for (let i = 0; i < result.rows.length; i++) {
                    data.push({
                        name: result.rows[i].NOMBRE,
                        type: 'folder'
                    });
                }
            }
            if (result2.rows.length > 0) {
                for (let i = 0; i < result2.rows.length; i++) {
                    data.push({
                        name: result2.rows[i].NOMBRE,
                        content: result2.rows[i].CONTENIDO,
                        type: 'file'
                    });
                }
            }
            res.json(data);
        });
    }
    getFile(req, res) {
        return __awaiter(this, void 0, void 0, function* () {
            let query = `SELECT * FROM archivo WHERE id = ${req.params.id}`;
            const result = yield database.simpleExecute(query);
            const data = {
                id: result.rows[0].ID,
                name: result.rows[0].NOMBRE,
                content: result.rows[0].CONTENIDO,
                father: result.rows[0].CARPETA
            };
            res.json(data);
        });
    }
    updateFile(req, res) {
        return __awaiter(this, void 0, void 0, function* () {
            const { id, content } = req.body;
            let query = `UPDATE archivo
                     SET contenido = '${content}'
                     WHERE id = ${id}`;
            const result = yield database.simpleExecute(query);
            res.json({ Response: "Succesfully saved" });
        });
    }
    deleteFolder(req, res) {
        return __awaiter(this, void 0, void 0, function* () {
            let query = `DELETE FROM carpeta WHERE id = ${req.params.id}`;
            const result = yield database.simpleExecute(query);
            res.json({ Response: "Folder deleted" });
        });
    }
    deleteFile(req, res) {
        return __awaiter(this, void 0, void 0, function* () {
            let query = `DELETE FROM archivo WHERE id = ${req.params.id}`;
            const result = yield database.simpleExecute(query);
            res.json({ Response: "File deleted" });
        });
    }
    renameFolder(req, res) {
        return __awaiter(this, void 0, void 0, function* () {
            const { id, name } = req.body;
            let query = `UPDATE carpeta
                     SET nombre = '${name}'
                     WHERE id = ${id}`;
            const result = yield database.simpleExecute(query);
            res.json({ Response: "Folder renamed" });
        });
    }
    renameFile(req, res) {
        return __awaiter(this, void 0, void 0, function* () {
            const { id, name } = req.body;
            let query = `UPDATE archivo
                     SET nombre = '${name}'
                     WHERE id = ${id}`;
            const result = yield database.simpleExecute(query);
            res.json({ Response: "Folder renamed" });
        });
    }
}
exports.fsController = new FileController();
