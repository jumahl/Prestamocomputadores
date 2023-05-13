#include "frmestudiante.h"
#include "ui_frmestudiante.h"
#include "datos.h"

frmestudiante::frmestudiante(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmestudiante)
{
    ui->setupUi(this);
}

frmestudiante::~frmestudiante()
{
    delete ui;
}

void frmestudiante::on_btnadicionar_clicked()
{
    mostrar();
    ui->btnadicionar->setDisabled(1);
    ui->btnmodificar->setDisabled(1);
    ui->btneliminar->setDisabled(1);
    ui->btnbuscar->setDisabled(1);
    ui->btnguardar->setEnabled(1);
    ui->btnsalir->setEnabled(1);

    ui->txtidentificacion->clear();
    ui->txtnombre->clear();
    ui->txttelefono->clear();
    ui->txtcorreo->clear();
    ui->txtidentificacion->setEnabled(1);
    ui->txtnombre->setEnabled(1);
    ui->txttelefono->setEnabled(1);
    ui->txtcorreo->setEnabled(1);

    ui->txtidentificacion->setFocus();
    nuevo=true;


}

void frmestudiante::on_btnguardar_clicked()
{
    QString identifi;
    identifi=ui->txtidentificacion->text();
    if(identifi.isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setText("Debe ingresar la identificacion de estudiante");
        msgBox.exec();
        ui->txtidentificacion->setFocus();
        return;


    }

    QString nombre;
    nombre=ui->txtnombre->text();
    if(nombre.isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setText("Debe ingresar el nombre de estudiante");
        msgBox.exec();
        ui->txtnombre->setFocus();
        return;
    }

    QString semestre;
    semestre=ui->txtsemestre->text();

    QString carrera;
    carrera=ui->txtprograma->currentText();

    QString telefono;
    telefono=ui->txttelefono->text();
    if(telefono.isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setText("debe ingresar el telefono");
        msgBox.exec();
        ui->txttelefono->setFocus();
        return;
    }
    QString correo;
    correo=ui->txtcorreo->text();
    if(correo.isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setText("debe ingresar el correo");
        msgBox.exec();
        ui->txtcorreo->setFocus();
        return;
    }

    int pos= misdatos.posicionEstudiante(ui->txtidentificacion->text());
    if(nuevo)
    {if(pos !=-1)
        {
            QMessageBox msgBox;
            msgBox.setText("El estudiante ya Existe");
            msgBox.exec();
            ui->txtidentificacion->setFocus();
            return;
        }

    }
    else if (pos == -1)
    {
        QMessageBox msgBox;
        msgBox.setText("El estudiante no Existe");
        msgBox.exec();
        ui->txtidentificacion->setFocus();
        return;
    }

    Estudiante miestudiante=Estudiante(identifi,nombre,semestre,carrera,telefono,correo);

    string msg;
    if(nuevo)
    {
        msg=misdatos.agregarEstudiante(miestudiante);
        conEstu=conEstu+1;
    }
    else
    {
       msg=misdatos.modificarEstudiante(miestudiante,pos);
    }

    QString msg1=QString::fromStdString(msg);
    QMessageBox msgBox;
    msgBox.setText(msg1);
    msgBox.exec();

    ui->btnadicionar->setEnabled(1);
    ui->btnmodificar->setEnabled(1);
    ui->btnbuscar->setEnabled(1);
    ui->btneliminar->setEnabled(1);
    ui->btnbuscar->setEnabled(1);

    ui->btnadicionar->setDisabled(1);
    ui->btnmodificar->setDisabled(1);
    ui->btnbuscar->setDisabled(1);
    ui->btneliminar->setDisabled(1);
    ui->btnbuscar->setDisabled(1);

    mostrar();

}

void frmestudiante::on_btnmodificar_clicked()
{

}

void frmestudiante::on_btnbuscar_clicked()
{

}

void frmestudiante::on_btneliminar_clicked()
{

}

void frmestudiante::on_btnsalir_clicked()
{

}
