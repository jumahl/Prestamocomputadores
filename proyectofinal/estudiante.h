#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <QString>

class Estudiante
{
private:
    QString identificacion;
    QString nombre;
    QString semestre;
    QString programaaca;
    QString telefono;
    QString correo;


public:
    Estudiante();
    Estudiante(QString identificacion,QString nombre,QString semestre,QString programaaca,QString telefono,QString correo);
    ~Estudiante();
    void setIdentificacion(QString identificacion);
    void setNombre(QString nombre);
    void setSemestre(QString semestre);
    void setProgramaaca(QString programaaca);
    void setTelefono(QString telefono);
    void setCorreo(QString correo);
    QString getIdentificacion();
    QString getNombre();
    QString getSemestre();
    QString getProgramaaca();
    QString getTelefono();
    QString getCorreo();

};

#endif // ESTUDIANTE_H


