#include <iostream>
using namespace std;
/*Diseñe un programa que, a partir del ingreso de la edad de una persona, indique en qué etapa de la 
vida se encuentra (niñez, adolescencia, adultez, vejez).*/
int main(){
    float edadIngresada;
    cout << "Ingrese su edad para determinar la etapa de su vida: ";
    cin >> edadIngresada;
    while (edadIngresada < 0 || edadIngresada != (int)edadIngresada ){
        cout << "Ingrese una edad valida para determinar la etapa de su vida: ";
        cin >> edadIngresada;
    }
    if (edadIngresada <= 13){
        cout << "Usted esta en la ninez";
    }
    else if (edadIngresada > 13 && edadIngresada < 18){
        cout << "Usted esta en la adolescencia";
    }
    else if (edadIngresada >= 18 && edadIngresada < 65){
        cout << "Usted esta en la adultez";
    }
        else{
            cout << "Usted esta en la vejez";
        }
    return 0;
}