"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.default = {
    database: {
        host: 'localhost',
        user: process.env.DB_USER,
        password: process.env.DB_PASSWORD,
        database: 'Proyecto2',
        poolMin: 10,
        poolMax: 10,
        poolIncrement: 0
    }
};
