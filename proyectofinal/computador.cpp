#include "computador.h"

Computador::Computador()
{

}
Computador::Computador(QString codiequi,QString tipo,QString capamemoria,QString velociproce,QString capadiscoduro,QString fechacompra)
{
    this->codiequi=codiequi;
    this->tipo=tipo;
    this->capamemoria=capamemoria;
    this->velociproce=velociproce;
    this->capadiscoduro=capadiscoduro;
    this->fechacompra=fechacompra;

}
Computador::~Computador()
{

}
void Computador::setCodiequi(QString codiequi)
{
    this->codiequi=codiequi;
}
void Computador::setTipo(QString tipo)
{
    this->tipo=tipo;
}
void Computador::setCapamemoria(QString capamemoria)
{
    this->capamemoria=capamemoria;
}
void Computador::setVelociproce(QString velociproce)
{
    this->velociproce=velociproce;
}
void Computador::setCapadiscoduro(QString capadiscoduro)
{
    this->capadiscoduro=capadiscoduro;
}
void Computador::setFechacompra(QString fechacompra)
{
    this->fechacompra=fechacompra;
}

QString Computador::getCodiequi()
{
    return codiequi;
}
QString Computador::getTipo()
{
    return tipo;
}
QString Computador::getCapamemoria()
{
    return capamemoria;
}
QString Computador::getVelociproce()
{
    return velociproce;
}
QString Computador::getCapadiscoduro()
{
    return capadiscoduro;
}
QString Computador::getFechacompra()
{
    return fechacompra;
}

