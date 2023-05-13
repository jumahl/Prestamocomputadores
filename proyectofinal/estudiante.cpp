#include "estudiante.h"

Estudiante::Estudiante()
{

}
Estudiante::Estudiante(QString identificacion,QString nombre,QString semestre,QString programaaca,QString telefono,QString correo)
{
    this->identificacion=identificacion;
    this->nombre=nombre;
    this->semestre=semestre;
    this->programaaca=programaaca;
    this->telefono=telefono;
    this->correo=correo;

}
Estudiante::~Estudiante()
{

}

void Estudiante::setIdentificacion(QString identificacion)
{
    this->identificacion=identificacion;
}
void Estudiante::setNombre(QString nombre)
{
    this->nombre=nombre;
}
void Estudiante::setSemestre(QString semestre)
{
    this->semestre=semestre;
}
void Estudiante::setProgramaaca(QString programaaca)
{
    this->programaaca=programaaca;
}
void Estudiante::setTelefono(QString telefono)
{
    this->telefono=telefono;
}
void Estudiante::setCorreo(QString correo)
{
    this->correo=correo;
}


QString Estudiante::getIdentificacion()
{
    return identificacion;
}
QString Estudiante::getNombre()
{
    return nombre;
}
QString Estudiante::getSemestre()
{
    return semestre;
}
QString Estudiante::getProgramaaca()
{
    return programaaca;
}
QString Estudiante::getTelefono()
{
    return telefono;

}
QString Estudiante::getCorreo()
{
    return correo;
}
