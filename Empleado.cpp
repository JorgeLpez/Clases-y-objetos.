#include "Empleado.h"

Empleado::Empleado(int ClaveEmpleado,string Nombre,string Domicilio,string ReportaA,float Sueldo)
{
    this->ClaveEmpleado=ClaveEmpleado;
    this->Nombre=Nombre;
    this->Domicilio=Domicilio;
    this->ReportaA=ReportaA;
    this->Sueldo=Sueldo;
}

void Empleado::CambiaDomic(string dir)
{
    Domicilio=dir;
}

void Empleado::CambiaReportaA(string Name)
{
    ReportaA=Name;
}
void Empleado::ActualSueldo(float perc)
{
    Sueldo+=(Sueldo*(perc/100));
}

void Empleado::Imprime()
{
    cout<<"Clave de empleado: "<<ClaveEmpleado<<endl;
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Domicilio: "<<Domicilio<<endl;
    cout<<"Sueldo: $"<<Sueldo<<endl;
    cout<<"Reporta: "<<ReportaA<<endl;
}

int Empleado::getClave()
{
    return ClaveEmpleado;
}


