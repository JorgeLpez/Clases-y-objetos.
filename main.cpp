#include<iostream>
#include<string.h>
#include "Empleado.h"

using namespace std;

int main()
{
    Empleado JefePlanta(666,"Jose Gomez","Moctezuma #567","jkajsdk",2500.76);
    Empleado JefePersonal(777,"Juan Lopez","Juarez #342","adsjkl",1500);

    int Clave,opc,opc2,perc;
    string NewAdress,NewName;

    do{
        system("cls");
        cout<<"\n\t***MENU DE OPCIONES***"<<endl;
        cout<<"1. Cambiar el domicilio. "<<endl;
        cout<<"2. Actualizar el sueldo. "<<endl;
        cout<<"3. Imprimir los datos de un empleado. "<<endl;
        cout<<"4. Cambiar el nombre de la persona a quien reporta uno de los empleados. "<<endl;
        cout<<"5. Salir."<<endl;
        cout<<"Elije una opcion: ";
        cin>>opc;

        switch(opc){

            case 1: system("cls");
                    cout<<"Ingrese la clave del empleado: ";
                    cin>>Clave;

                    if(JefePlanta.getClave()==Clave){
                        fflush(stdin);
                        cout<<"Ingresa el nuevo domicilio: ";
                        getline(cin,NewAdress);
                        JefePlanta.CambiaDomic(NewAdress);
                        cout<<"Domicilio actualizado correctamente!"<<endl;
                    }else if(JefePersonal.getClave()==Clave){
                        fflush(stdin);
                        cout<<"Ingresa el nuevo domicilio: ";
                        getline(cin,NewAdress);
                        JefePersonal.CambiaDomic(NewAdress);
                        cout<<"Domicilio actualizado correctamente!"<<endl;
                    }else{
                        cout<<"La clave de empleado ingresada es incorrecta!"<<endl;
                    }
                    system("pause");
                    break;

            case 2: system("cls");
                    cout<<"Ingrese la clave del empleado: ";
                    cin>>Clave;

                    if(JefePlanta.getClave()==Clave){
                        cout<<"cuanto porcentaje desea incrementar el sueldo: ";
                        cin>>perc;
                        JefePlanta.ActualSueldo(perc);
                        cout<<"sueldo incrementado en "<<perc<<" % correctamente!"<<endl;
                    }else if(JefePersonal.getClave()==Clave){
                        cout<<"Cuanto porcentaje desea incrementar el sueldo: ";
                        cin>>perc;
                        JefePersonal.ActualSueldo(perc);
                        cout<<"Sueldo incrementado en "<<perc<<" % correctamente"<<endl;
                    }else{
                        cout<<"La clave de empleado ingresa es incorrecta!"<<endl;
                    }
                    system("pause");
                    break;

            case 3: system("cls");
                    cout<<"Ingrese la clave del empleado: ";
                    cin>>Clave;

                    if(JefePlanta.getClave()==Clave){
                        cout<<"\n\t***Mostrando los datos del empleado***"<<endl;
                        JefePlanta.Imprime();
                    }else if(JefePersonal.getClave()==Clave){
                        cout<<"\n\t***Mostrando los datos del empleado***"<<endl;
                        JefePersonal.Imprime();
                    }else{
                        cout<<"La clave de empleado ingresada es incorrecta!"<<endl;
                    }
                    system("pause");
                    break;

            case 4: system("cls");
                    cout<<"Ingrese la clave del empleado: ";
                    cin>>Clave;

                    if(JefePersonal.getClave()==Clave){
                        fflush(stdin);
                        cout<<"Ingrese el nuevo nombre: ";
                        getline(cin,NewName);
                        JefePersonal.CambiaReportaA(NewName);
                    }else if(JefePlanta.getClave()==Clave){
                        fflush(stdin);
                        cout<<"Ingrese el nuevo nombre: ";
                        getline(cin,NewName);
                        JefePlanta.CambiaReportaA(NewName);
                    }else{
                        cout<<"La clave de empleado ingresada es incorrecta!"<<endl;
                    }
                    system("pause");
                    break;

        }
    }while(opc!=5);

    return 0;
}
