CREATE TABLE usuario(
    id INTEGER PRIMARY KEY,
    username VARCHAR2(40) NOT NULL,
    nombre1 VARCHAR2(40),
    nombre2 VARCHAR2(40),
    apellido1 VARCHAR2(40),
    apellido2 VARCHAR2(40),
    clave VARCHAR2(30) NOT NULL,
    correo VARCHAR2(60),
    telefono INTEGER,
    fotografia VARCHAR2(255),
    genero VARCHAR2(1),
    fecha_nacimiento DATE,
    fecha_registro TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    direccion VARCHAR2(200)    
);

INSERT INTO usuario (username,clave) VALUES('raxl','123');

CREATE SEQUENCE user_seq START WITH 1;

CREATE TRIGGER user_trigger
BEFORE INSERT ON usuario
FOR EACH ROW
BEGIN 
    SELECT user_seq.NEXTVAL
    INTO :new.id
    FROM dual;
END;

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
    tipo_sistema INTEGER,
    id_disco INTEGER,
    id_usuario INTEGER,
    FOREIGN KEY (id_Disco) REFERENCES disco(id),
    FOREIGN KEY (id_Usuario) REFERENCES usuario(id)
);

CREATE TABLE carpeta(
    id INTEGER PRIMARY KEY,
    nombre VARCHAR2(60) NOT NULL,
    padre INTEGER,
    particion INTEGER,
    FOREIGN KEY (padre) REFERENCES carpeta(id),
    FOREIGN KEY (particion) REFERENCES particion(id)
);

CREATE TABLE archivo(
    id INTEGER PRIMARY KEY,
    nombre VARCHAR2(50),
    contenido VARCHAR2(400),
    carpeta INTEGER,
    FOREIGN KEY (carpeta) REFERENCES carpeta(id)
);