#include "prestamo.h"

Prestamo::Prestamo()
{

}
Prestamo::Prestamo(QString numeropresta, QString codigoequipo,QString identiestudian,QString fechapres,QString estado)
{
    this->numeropresta=numeropresta;
    this->codigoequipo=codigoequipo;
    this->identiestudian=identiestudian;
    this->fechapres=fechapres;
    this->estado=estado;
}
Prestamo::~Prestamo()
{

}
void Prestamo::setNumeropresta(QString numeropresta)
{
    this->numeropresta=numeropresta;
}
void Prestamo::setCodigoequipo(QString codigoequipo)
{
    this->codigoequipo=codigoequipo;
}
void Prestamo::setIdentiestudian(QString identiestudian)
{
    this->identiestudian=identiestudian;
}
void Prestamo::setFechapres(QString fechapres)
{
    this->fechapres=fechapres;
}
void Prestamo::setEstado(QString estado)
{
    this->estado=estado;
}

QString Prestamo::getNumeropresta()
{
    return numeropresta;
}
QString Prestamo::getCodigoequipo()
{
    return codigoequipo;
}
QString Prestamo::getIdentiestudian()
{
    return identiestudian;
}
QString Prestamo::getFechapres()
{
    return fechapres;
}
QString Prestamo::getEstado()
{
    return estado;
}
