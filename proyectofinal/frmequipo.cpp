#include "frmequipo.h"
#include "ui_frmequipo.h"
#include "datos.h"

frmequipo::frmequipo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmequipo)
{
    ui->setupUi(this);
}

frmequipo::~frmequipo()
{
    delete ui;
}

void frmequipo::on_btnadicionar_clicked()
{
    mostrar();
    ui->btnadicionar->setDisabled(1);
    ui->btnmodificar->setDisabled(1);
    ui->btneliminar->setDisabled(1);
    ui->btnbuscar->setDisabled(1);
    ui->btnguardar->setEnabled(1);
    ui->btnsalir->setEnabled(1);

    ui->txtcodequipo->clear();
    ui->txtmemoriaram->clear();
    ui->txtvelocidadproce->clear();
    ui->txtalmacenaint->clear();
    ui->txtcodequipo->setEnabled(1);
    ui->txttipo->setEnabled(1);
    ui->txtmemoriaram->setEnabled(1);
    ui->txtvelocidadproce->setEnabled(1);
    ui->txtalmacenaint->setEnabled(1);
    compra=QDate::currentDate();
    ui->txtaniocompra->setDate(compra);
    ui->txtaniocompra->setEnabled(1);

    ui->txtcodequipo->setFocus();
    nuevo=true;


}

void frmequipo::on_btnguardar_clicked()
{
    QString codigoequi;
    codigoequi=ui->txtcodequipo->text();
    if(codigoequi.isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setText("Debe ingresar el codigo del equipo");
        msgBox.exec();
        ui->txtcodequipo->setFocus();
        return;
    }

    QString tipoequi;
    tipoequi=ui->txttipo->currentText();


    QString capacidadmem;
    capacidadmem=ui->txtmemoriaram->text();
    if(capacidadmem.isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setText("Debe ingresar la capacidad de memoria del equipo");
        msgBox.exec();
        ui->txtmemoriaram->setFocus();
        return;
    }

    QString velociproce;
    velociproce=ui->txtvelocidadproce->text();

    QString capadisco;
    capadisco=ui->txtalmacenaint->text();
    if(capadisco.isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setText("Debe ingresar el almacenamiento del equipo");
        msgBox.exec();
        ui->txtalmacenaint->setFocus();
        return;
    }

    QString aniocompr=ui->txtaniocompra->text();








    int pos = misdatos.posicionComputador(ui->txtcodequipo->text());
    if(nuevo)
    {
        if(pos !=-1)
        {
            QMessageBox msgBox;
            msgBox.setText("El computador ya Existe");
            msgBox.exec();
            ui->txtcodequipo->setFocus();
            return;
        }

    }
    else if (pos == -1)
    {
        QMessageBox msgBox;
        msgBox.setText("El computador no Existe");
        msgBox.exec();
        ui->txtcodequipo->setFocus();
        return;
    }


    Computador micomputador=Computador(codigoequi,tipoequi,capacidadmem,velociproce,capadisco,aniocompr);

    string msg;
    if(nuevo)
    {
        msg=misdatos.agregarComputador(micomputador);
        conComp=conComp+1;
    }
    else
    {
       msg=misdatos.modificarComputador(micomputador,pos);
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

    ui->txtcodequipo->setDisabled(1);
    ui->txtmemoriaram->setDisabled(1);
    ui->txtalmacenaint->setDisabled(1);


    mostrar();


}

void frmequipo::on_btnmodificar_clicked()
{
    ui->btnadicionar->setDisabled(1);
    ui->btnmodificar->setDisabled(1);
    ui->btnbuscar->setDisabled(1);
    ui->btneliminar->setDisabled(1);
    ui->btnbuscar->setDisabled(1);
    ui->btnsalir->setDisabled(1);

    ui->txtcodequipo->setEnabled(1);
    ui->txtmemoriaram->setEnabled(1);
    ui->txtalmacenaint->setEnabled(1);

    nuevo=false;

    ui->txtcodequipo->setFocus();


}

void frmequipo::on_btnbuscar_clicked()
{
    QString codiequi = QInputDialog::getText(this,"entrada","Ingrese el codigo de equipo");


    int pos=misdatos.posicionComputador(codiequi);
    if(pos==-1)
    {
        QMessageBox msgBox;
        msgBox.setText("el computador no esta registrado");
        msgBox.exec();
        return;
    }
    compAct=pos;
    ui->btnsalir->setEnabled(1);
    ui->btnmodificar->setEnabled(1);
    ui->btneliminar->setEnabled(1);

    mostrarRegistro();

}

void frmequipo::on_btneliminar_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("esta seguro de borrar el equipo");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
    int ret=msgBox.exec();
    if(ret ==QMessageBox::Yes)
    {
        QString res = misdatos.borrarComputador(compAct);
        QMessageBox msgBox1;
        msgBox1.setText(res);
        msgBox1.exec();
        ui->txttodosdatos->clear();
        conComp=conComp-1;
        mostrar();
        ui->txtcodequipo->clear();
        ui->txtmemoriaram->clear();
        ui->txtalmacenaint->clear();

        ui->txtcodequipo->setDisabled(1);
        ui->txtmemoriaram->setDisabled(1);
        ui->txtalmacenaint->setDisabled(1);
        ui->btnmodificar->setDisabled(1);
        ui->btneliminar->setDisabled(1);
    }
    return;


}
void frmequipo::on_btnsalir_clicked()
{
    this->close();


}
void frmequipo::mostrar()
{
    ui->txttodosdatos->clear();
    QString resultado;
    resultado=misdatos.getReporteComputador();
    ui->txttodosdatos->append(resultado);
}

void frmequipo::mostrarRegistro()
{
    ui->txtcodequipo->setText(misdatos.getComputador()[compAct].getCodiequi());
    ui->txtmemoriaram->setText(misdatos.getComputador()[compAct].getCapadiscoduro());
    ui->txtalmacenaint->setText(misdatos.getComputador()[compAct].getCapadiscoduro());
}
