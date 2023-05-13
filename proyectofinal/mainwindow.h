#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "frmestudiante.h"
#include "frmequipo.h"
#include "frmprestamo.h"
#include "datos.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionIngresar_Estudiante_triggered();

    void on_actionIngresar_Equipo_de_Computo_triggered();

    void on_actionRealizacion_del_Pr_stamo_triggered();

    void on_actionSalir_triggered();

private:
    Ui::MainWindow *ui;
    frmequipo mifrmequipo;
    frmestudiante mifrmestudiante;
    frmprestamo mifrmprestamo;
};

#endif // MAINWINDOW_H
