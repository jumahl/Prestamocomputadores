#ifndef FRMESTUDIANTE_H
#define FRMESTUDIANTE_H
#include"datos.h"
#include <QWidget>

#include <QWidget>

namespace Ui {
class frmestudiante;
}

class frmestudiante : public QWidget
{
    Q_OBJECT

public:
    explicit frmestudiante(QWidget *parent = 0);
    ~frmestudiante();

    void mostrar();
    void mostrarRegistro();
    bool nuevo=false;

    int conEstu=0;
    int estuActu=0;

private slots:
    void on_btnadicionar_clicked();

    void on_btnguardar_clicked();

    void on_btnmodificar_clicked();

    void on_btnbuscar_clicked();

    void on_btneliminar_clicked();

    void on_btnsalir_clicked();

private:
    Ui::frmestudiante *ui;
    Datos misdatos;
};

#endif // FRMESTUDIANTE_H
