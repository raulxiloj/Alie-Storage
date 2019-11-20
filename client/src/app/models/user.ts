export interface User{
    id?: number;
    username?: string;
    nombre?: string;
    apellido?: string;
    clave?: string;
    correo?: string;
    telefono?: number;
    fotografia?: File;
    genero?: string;
    fecha_nacimiento?: string;
    direccion?: string;
    created_at?: Date;
    estado?: number;
}