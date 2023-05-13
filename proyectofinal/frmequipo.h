#ifndef FRMEQUIPO_H
#define FRMEQUIPO_H
#include"datos.h"
#include <QWidget>

namespace Ui {
class frmequipo;
}

class frmequipo : public QWidget
{
    Q_OBJECT

public:
    explicit frmequipo(QWidget *parent = nullptr);
    ~frmequipo();
    void mostrar();
    void mostrarRegistro();
    bool nuevo=false;

    int conComp=0;
    int compAct=0;
    QDate compra;

private slots:
    void on_btnadicionar_clicked();

    void on_btnguardar_clicked();

    void on_btnmodificar_clicked();

    void on_btnbuscar_clicked();

    void on_btneliminar_clicked();

    void on_btnsalir_clicked();

private:
    Ui::frmequipo *ui;
    Datos misdatos;

};

#endif // FRMEQUIPO_H
