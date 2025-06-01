#include <iostream>
using namespace std;
//Diseñe un sistema que permita determinar si un año ingresado es bisiesto.
int main(){
    int anio;
    cout << "Ingresa un anio para determinar si es bisiesto o no: ";
    cin >> anio;
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){
        cout << "El anio es bisiesto";
    }
    else{
        cout << "El anio no es bisiesto";
    }
    return 0;
}