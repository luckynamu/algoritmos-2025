#include <iostream>
using namespace std;
/*Implemente un programa que calcule el máximo común divisor (MCD) de dos enteros utilizando el
algoritmo de Euclides.*/
int main(){
    int numeroA;
    int numeroB;
    int MCD = 0;
    cout << "Ingrese dos numeros enteros: ";
    cin >> numeroA;
    cin >> numeroB;
    int numeroAOriginal = numeroA;
    int numeroBOriginal = numeroB;
    numeroA = abs(numeroA);
    numeroB = abs(numeroB);
    if (numeroA == 0 && numeroB == 0){
        cout << "El MCD no esta definido para estos numeros";
        return 1;
    }
    if (numeroA == 0){
        MCD = numeroB;
    }
    else if (numeroB == 0){
        MCD  = numeroA;
    }
   while (numeroB != 0){
        int resto = numeroA % numeroB;
        numeroA = numeroB;
        numeroB = resto;
        MCD = numeroA;
    }
    cout << "El MCD de " << numeroAOriginal << " y " << numeroBOriginal << " es: " << MCD;
    return 0;
}