#include <iostream>
using namespace std;
//Dados un conjunto de valores enteros y positivos determinar e informar el mayor
int main(){
    int numero;
    cout << "Ingresa un numero entero y positivo (-1 para terminar): ";
    cin >> numero;
    int mayor = numero;
    if (numero < 0){
        cout << "No hay nada que hacer, chau";
        return 1;
    }
    while (numero != -1){
        cout << "Ingresa otro numero entero y positivo (-1 para terminar): ";
        cin >> numero;
        if (numero > mayor){
            mayor = numero;
        }
    }
    cout << "El numero mayor de los ingresados es el " << mayor;
    return 0;
}