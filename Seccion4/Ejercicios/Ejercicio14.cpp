/*Una clase de 5 alumnos ha realizado 3 examenes y se requiere determinar el numero de:
    A) Numero de Alumnos que aprueban todos los examenes
    B) Numero de Alumnos que aprueban al menos un examen
    C) Numero de Alumnos que aprobaron unicamente el ultimo examen
    Realice un programa que permita la lectura de datos y el calculo de las estadisticas*/

#include <iostream>

using namespace std;

int  main(){
    double  e1,e2,e3;
    int r=0,a1 = 0,au = 0;

    for(int i = 1; i < 6; i++){
        cout << "Alumno numero " << i << "\n";
        cout << "Ingrese la nota del primer examen:  ";  cin >> e1;
        cout << "Ingrese la nota del segundo examen:  ";  cin >> e2;
        cout << "Ingrese la nota del tercer examen:  ";  cin >> e3;

        if(e1 >= 3 &&  e2 >= 3 && e3 >= 3){
            r++;
        } 
        else if(e1 >= 3 || e2 >= 3 ||e3 >= 3 ){
            a1++;
        }
        else if(e1 < 3 &&  e2 < 3  && e3 >= 3){
            au++;
        }
    }

    cout << "\nAlumnos que aprueban todos los examenes: " << r << endl;
    cout << "Alumnos que aprueban al menos un examen: " << a1 << endl;
    cout << "Alumnos que aprueban unicamente el ultimo examen: " << au << endl;

    return 0;
}