#ifndef COMPUTADOR_H
#define COMPUTADOR_H
#include <QString>

class Computador
{
private:
    QString codiequi;
    QString tipo;
    QString capamemoria;
    QString velociproce;
    QString capadiscoduro;
    QString fechacompra;




public:
    Computador();
    Computador(QString codiequi,QString tipo,QString capamemoria,QString velociproce,QString capadiscoduro,QString fechacompra);
    ~Computador();
    void setCodiequi(QString codiequi);
    void setTipo(QString tipo);
    void setCapamemoria(QString capamemoria);
    void setVelociproce(QString velociproce);
    void setCapadiscoduro(QString capadiscoduro);
    void setFechacompra(QString fechacompra);

    QString getCodiequi();
    QString getTipo();
    QString getCapamemoria();
    QString getVelociproce();
    QString getCapadiscoduro();
    QString getFechacompra();



};

#endif // COMPUTADOR_H

