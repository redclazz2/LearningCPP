/* Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida estándar
el precio del producto al aplicarle IVA*/
#include<iostream>
using namespace std;
int main()
{
    double precio,precioIVA,IVA = 0.19;
    
    cout<<"Ingrese el valor del producto";
    cin>>precio;

    precioIVA = precio * IVA;
    
    cout<<"El producto con precio "<<precio<<" Tiene un IVA (19%) de "<<precioIVA<<" Para un total de " <<precio+precioIVA;
    return 0;
}