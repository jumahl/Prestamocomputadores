#include "datos.h"
#include "estudiante.h"
#include "computador.h"
#include "prestamo.h"
#include <iostream>

static Estudiante arreEstu [maxEstu];
static int conEstu=0;
static Computador arrCompu[maxCompu];
static int conCompu=0;
static Prestamo arrPresta[maxPrestamos];
static int conPresta=0;


Datos::Datos()
{

}
Datos::~Datos()
{

}
string Datos::agregarEstudiante(Estudiante estu)
{
    if(conEstu == maxEstu)
    {
        return ("Se ha alcanzado el número máximo de Estudiantes");
    }
    arreEstu[conEstu]= estu;
    conEstu++;
    return "Estudiante agregado correctamente";
}
QString Datos::borrarEstudiante(int pos)
{
    for (int i = pos;i < conEstu - 1 ;i++)
    {
       arreEstu[i]=arreEstu[i+1];
    }
    conEstu--;
    return ("Estudiante borrado correctamente");
}
string Datos::modificarEstudiante(Estudiante estu, int pos)
{
    arreEstu[pos].setNombre(estu.getNombre());
    arreEstu[pos].setCorreo(estu.getCorreo());
    arreEstu[pos].setSemestre(estu.getSemestre());
    arreEstu[pos].setTelefono(estu.getTelefono());
    arreEstu[pos].setProgramaaca(estu.getProgramaaca());
    return ("Estudiante modificado correctamente");
}
QString Datos::getReporteEstudiante()
{
    QString aux="";
    aux = "Identificacion\t\tNombre\t\t\tPrograma academico\tSemestre\n\n";
    for (int i=0;i<conEstu;i++)
    {
        aux = aux + arreEstu[i].getIdentificacion();
        aux = aux +"\t\t";
        aux = aux + arreEstu[i].getNombre();
        aux = aux +"\t\t";
        aux = aux + arreEstu[i].getProgramaaca();
        aux = aux +"\t\t";
        aux = aux + arreEstu[i].getSemestre();
        aux = aux +"\n";
    }
    return aux;
}
int Datos::posicionEstudiante(QString estudiante)
{
    for(int i=0; i<conEstu;i++)
    {
        if(arreEstu[i].getIdentificacion()==estudiante)
        {
            return i;
        }
    }
    return -1;
}
Estudiante* Datos::getEstudiante()
{
    Estudiante *pArreglo;
    pArreglo = arreEstu;
    return pArreglo;

}
string Datos::agregarComputador(Computador compu)
{
    if(conCompu==maxCompu)
    {
        return ("se ha alzando el numero maximo de computadores");
    }
    arrCompu[conCompu]=compu;
    conCompu++;
    return "Computador agregado correctamente";
}
QString Datos::borrarComputador(int pos)
{
    for (int i = pos;i < conCompu - 1; i++)
    {
        arrCompu[i]=arrCompu[i+1];
    }
    conCompu--;
    return ("Computador borrado correctamente");
}
string Datos::modificarComputador(Computador compu, int pos)
{
    arrCompu[pos].setCodiequi(compu.getCodiequi());
    arrCompu[pos].setTipo(compu.getTipo());
    arrCompu[pos].setCapamemoria(compu.getCapamemoria());
    arrCompu[pos].setCapadiscoduro(compu.getCapadiscoduro());
    arrCompu[pos].setFechacompra(compu.getFechacompra());
    return ("Computador modificado correctamnete");

}
QString Datos::getReporteComputador()
{
    QString aux="";
    aux="Codigo de equipo\t\tTipo\t\t\tRam\tDisco duro\n\n";
    for(int i=0;i < conCompu;i++)
    {
        aux = aux + arrCompu[i].getCodiequi();
        aux = aux +"\t\t";
        aux = aux + arrCompu[i].getTipo();
        aux = aux +"\t\t";
        aux = aux + arrCompu[i].getCapamemoria();
        aux = aux +"\t\t";
        aux = aux + arrCompu[i].getCapadiscoduro();
        aux = aux +"\n";
    }
    return aux;
}
int Datos::posicionComputador(QString computador)
{
    for(int i=0; i < conCompu; i++)
    {
        if(arrCompu[i].getCodiequi()==computador)
        {
            return i;
        }
    }
    return -1;
}
Computador* Datos::getComputador()
{
    Computador *pArrgloo;
    pArrgloo=arrCompu;
    return  pArrgloo;
}
string Datos::agregarPrestamo(Prestamo presta)
{
    if(conPresta==maxPrestamos)
    {
        return ("se ha alcanzado el numero maximo de prestamos");
    }
    arrPresta[conPresta]=presta;
    conPresta++;
    return "Se ha realizado el prestamo correctamente";
}
int Datos::posicionPrestamo(QString Prestamo)
{
    for (int i = 0;i < conPresta; i++)
    {
        if(arrPresta[i].getCodigoequipo()==Prestamo)
        {
            return i;
        }
    }
    return -1;
}
string Datos::modificarPrestamo(Prestamo presta, int pos)
{
    arrPresta[pos].setFechapres(presta.getFechapres());
    arrPresta[pos].setEstado(presta.getEstado());
    return ("Prestamo modificado correctamente");
}
QString Datos::borrarPrestamo(int pos)
{
    for(int i = pos; i < conPresta -1; i++)
    {
        arrPresta[i]=arrPresta[i+1];
    }
    conPresta--;
    return ("Prestamo borrado correctamente");
}
Prestamo* Datos::getPrestamo()
{
    Prestamo * pArre;
    pArre = arrPresta;
    return pArre;
}
QString Datos::getReportePrestamo()
{
    QString aux="";
    aux="Numero de prestamo\t\tcodigo de equipo\t\t\tIdentificacion estudiente\tFecha de prestamo\tEstado\n\n";
    for(int i=0; i < conPresta;i++)
    {
        QString fecha = arrPresta[i].getFechapres();

        aux += arrPresta[i].getNumeropresta();
        aux += "\t";
        aux += arrPresta[i].getCodigoequipo();
        aux += "\t\t";
        aux += arrPresta[i].getIdentiestudian();
        aux += "\t";
        aux += fecha;
        aux += "\t";
        aux += arrPresta[i].getEstado();
        aux = aux +"\n";
    }
    return aux;
}
int Datos::getConComp()
{
    return conCompu;
}
int Datos::getConEstu()
{
    return conEstu;
}

int Datos::convierteANumeroInt(QString valor)
{   int n;
    n = valor.toInt();
    return n;
}

double Datos::convierteANumeroDouble(QString valor)
{   double n;
    n = valor.toDouble();
    return n;
}


