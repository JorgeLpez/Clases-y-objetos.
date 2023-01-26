#ifndef EMPLEADO_H
#define EMPLEADO_H
#include<iostream>

using namespace std;

class Empleado
{
    private:
        int ClaveEmpleado;
        string Nombre,Domicilio,ReportaA;
        float Sueldo;

    public:
        Empleado(int,string,string,string,float);
        void CambiaDomic(string);
        void CambiaReportaA(string);
        void ActualSueldo(float);
        void Imprime();
        int getClave();
};

#endif // EMPLEADO_H
