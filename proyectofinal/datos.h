#ifndef DATOS_H
#define DATOS_H
#include "estudiante.h"
#include "computador.h"
#include "prestamo.h"

#include <QMessageBox>
#include <QInputDialog>
#include <QDate>

using namespace std;

const int maxEstu = 10;
const int maxCompu = 10;
const int maxPrestamos = 10;


class Datos
{
public:
    Datos();
    ~Datos();
    string agregarEstudiante(Estudiante estu);
    QString borrarEstudiante(int pos);
    QString getReporte();
    int posicionEstudiante(QString estudiante);
    string modificarEstudiante(Estudiante estu,int pos);
    Estudiante*getEstudiante();
    int getConEstu();

    string agregarComputador(Computador compu);
    QString borrarComputador(int pos);
    QString getReporteEstudiante();
    QString getReporteComputador();
    QString getReportePrestamo();
    int posicionComputador(QString computador);
    string modificarComputador(Computador compu,int pos);
    Computador*getComputador();
    int getConComp();

    string agregarPrestamo(Prestamo presta);
    QString borrarPrestamo(int pos);
    int posicionPrestamo(QString Prestamo);
    string modificarPrestamo(Prestamo presta, int pos);
    Prestamo*getPrestamo();
    int convierteANumeroInt(QString valor);
    double convierteANumeroDouble(QString valor);




};

#endif // DATOS_H
