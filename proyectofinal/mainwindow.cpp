#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "frmestudiante.h"
#include "frmequipo.h"
#include "frmprestamo.h"
#include "datos.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionIngresar_Estudiante_triggered()
{
    this->mifrmestudiante.setWindowModality(Qt::ApplicationModal);
    mifrmestudiante.show();
    return;
}

void MainWindow::on_actionIngresar_Equipo_de_Computo_triggered()
{
    this->mifrmequipo.setWindowModality(Qt::ApplicationModal);
    mifrmequipo.show();
    return;
}

void MainWindow::on_actionRealizacion_del_Pr_stamo_triggered()
{
    this->mifrmprestamo.setWindowModality(Qt::ApplicationModal);
    mifrmprestamo.show();
    return;
}

void MainWindow::on_actionSalir_triggered()
{
    this->close();
}
