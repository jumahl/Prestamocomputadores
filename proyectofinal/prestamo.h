#ifndef PRESTAMO_H
#define PRESTAMO_H
#include <QString>

class Prestamo
{
private:
    QString numeropresta;
    QString codigoequipo;
    QString identiestudian;
    QString fechapres;
    QString estado;


public:
    Prestamo();
    Prestamo(QString numeropresta,QString codigoequipo,QString identiestudian,QString fechapres,QString estado);
    ~Prestamo();
    void setNumeropresta(QString numeropresta);
    void setCodigoequipo(QString codigoequipo);
    void setIdentiestudian(QString identiestudian);
    void setFechapres(QString fechapres);
    void setEstado(QString estado);
    QString getNumeropresta();
    QString getCodigoequipo();
    QString getIdentiestudian();
    QString getFechapres();
    QString getEstado();


};

#endif // PRESTAMO_H
