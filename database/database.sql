CREATE TABLE usuario(
    id INTEGER PRIMARY KEY,
    username VARCHAR2(40) UNIQUE NOT NULL,
    clave VARCHAR2(30) NOT NULL,
    nombre VARCHAR2(40),
    apellido VARCHAR2(40),
    correo VARCHAR2(60),
    telefono INTEGER,
    fotografia VARCHAR2(255),
    genero VARCHAR2(1),
    fecha_nacimiento DATE,
    fecha_registro TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    direccion VARCHAR2(200),
    estado NUMBER(1,0),
    tipo INTEGER
);

CREATE TABLE disco(
    id INTEGER PRIMARY KEY,
    nombre VARCHAR(50) NOT NULL,
    tamano INTEGER NOT NULL,
    direccion VARCHAR2(255)
);

CREATE TABLE particion(
    id INTEGER PRIMARY KEY,
    nombre VARCHAR2(50),
    tamano INTEGER,
    id_disco INTEGER,
    id_usuario INTEGER,
    FOREIGN KEY (id_Disco) REFERENCES disco(id),
    FOREIGN KEY (id_Usuario) REFERENCES usuario(id)
);

CREATE TABLE sistema_archivos(
    id INTEGER PRIMARY KEY,
    tipo INTEGER NOT NULL,
    id_part INTEGER NOT NULL,
    FOREIGN KEY (id_part) REFERENCES particion(id)
);

CREATE TABLE carpeta(
    id INTEGER PRIMARY KEY,
    nombre VARCHAR2(60) NOT NULL,
    padre INTEGER,
    fs INTEGER,
    FOREIGN KEY (padre) REFERENCES carpeta(id) ON DELETE CASCADE,
    FOREIGN KEY (fs) REFERENCES sistema_archivos(id)
);

CREATE TABLE archivo(
    id INTEGER PRIMARY KEY,
    nombre VARCHAR2(50),
    contenido VARCHAR2(400),
    carpeta INTEGER,
    FOREIGN KEY (carpeta) REFERENCES carpeta(id) ON DELETE CASCADE
);

CREATE TABLE homePage(
    nombre VARCHAR2(50),
    eslogan VARCHAR2(255),
    imagen_logo VARCHAR2(300),
    video VARCHAR2(300),
    mision VARCHAR2(400),
    vision VARCHAR2(400),
    about VARCHAR2(400)
);

CREATE SEQUENCE user_seq START WITH 1;
CREATE SEQUENCE disk_seq START WITH 500;
CREATE SEQUENCE part_seq START WITH 100;
CREATE SEQUENCE fs_seq   START WITH 1;
CREATE SEQUENCE folder_seq START WITH 1;
CREATE SEQUENCE file_seq START WITH 1;

CREATE TRIGGER user_trigger
BEFORE INSERT ON usuario
FOR EACH ROW
BEGIN 
    SELECT user_seq.NEXTVAL
    INTO :new.id
    FROM dual;
END;

CREATE TRIGGER disk_trigger
BEFORE INSERT ON disco
FOR EACH ROW
BEGIN 
    SELECT disk_seq.NEXTVAL
    INTO :new.id
    FROM dual;
END;

CREATE TRIGGER  part_trigger
BEFORE INSERT ON particion
FOR EACH ROW
BEGIN 
    SELECT part_seq.NEXTVAL
    INTO :new.id
    FROM dual;
END;

CREATE TRIGGER  fs_trigger
BEFORE INSERT ON sistema_archivos
FOR EACH ROW
BEGIN 
    SELECT fs_seq.NEXTVAL
    INTO :new.id
    FROM dual;
END;

CREATE TRIGGER folder_trigger
BEFORE INSERT ON carpeta
FOR EACH ROW
BEGIN 
    SELECT folder_seq.NEXTVAL
    INTO :new.id
    FROM dual;
END;

CREATE TRIGGER file_trigger
BEFORE INSERT ON archivo
FOR EACH ROW
BEGIN
    SELECT file_seq.NEXTVAL
    INTO :new.id
    FROM dual;
END;

INSERT INTO homePage(nombre,eslogan,mision,vision,about) 
VALUES('ALIE STORAGE','Need more space? Cloud storage is the solution','Give you a place to storage your folders, files and more information where you can access anywhere you are.','Continue supporting people around the world with their information, innovating our services daily.','Alie Storage makes it posibble to store practically limitless amount of data in a simple way. It is commonly used for data archiving and backup.');

INSERT INTO usuario(username,clave,tipo) VALUES ('admin','admin',2);

-- DROP TABLES
DROP TABLE archivo;
DROP TABLE carpeta;
DROP TABLE sistema_archivos;
DROP TABLE particion;
DROP TABLE disco;
DROP TABLE usuario;
-- DROP SEQUENCES
DROP SEQUENCE user_seq;
DROP SEQUENCE disk_seq;
DROP SEQUENCE part_seq;
DROP SEQUENCE fs_seq;
DROP SEQUENCE folder_seq;
DROP SEQUENCE file_seq;
-- DROP TRIGGERS
DROP TRIGGER user_trigger;
DROP TRIGGER disk_trigger;
DROP TRIGGER part_trigger;
DROP TRIGGER fs_trigger;
-- Clean tables
DELETE FROM sistema_archivos;
DELETE FROM particion;
DELETE FROM disco;
DELETE FROM usuario;

