/*Hacer un programa que simule un cajero automático con un saldo inicial de 1000
dólares*/
#include<iostream>
using namespace std;
int main()
{   
    int i;
    float saldoInicial = 1000,valorTransaccionn;
    cout<<"\tBienvenido al sistema de bancos La Denebola Rosa Juliet"<<endl;
    cout<<"1. Ingresar dinero a la cuenta"<<endl;
    cout<<"2. Retirar dinero a la cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Ingrese una opcion: "; cin>>i;

    switch(i) 
    {
        case 1:
            cout<<"Ingrese la cantidad de dinero que se quiere ingresar a la cuenta"<<endl; cin>>valorTransaccionn;
            saldoInicial+=valorTransaccionn;
            cout<<"El saldo de la cuenta ahora es: "<<saldoInicial<<endl;
        break;

        case 2:
            cout<<"Ingrese la cantidad de dinero que se quiere retirar de la cuenta"<<endl; cin>>valorTransaccionn;
            if(valorTransaccionn > saldoInicial)
            {
                cout<<"Transaccion Invalida, no tiene esa cantidad de dinero en la cuenta"<<endl;
            }
            else
            {
                saldoInicial-=valorTransaccionn;
                cout<<"El valor de dinero en la cuenta es: "<<saldoInicial<<endl;
            }
        break;

        case 3:
            cout<<"Gracias por usar nuestros servicios"<<endl;
        break;

        default:
            cout<<"Error, entrada invalida, saliendo del programa..."<<endl;
        break;

    }

    return 0;
}