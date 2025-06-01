#include <iostream>
using namespace std;
//Desarrolle un algoritmo que determine el número de dígitos de un entero positivo ingresado por el usuario.
int main(){
    int numero;
    int cantidadDeDigitos = 0;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    while (numero < 0){
        cout << "Numero invalido, ingrese un numero entero positivo: ";
        cin >> numero;
    }
    if (numero == 0){
        cantidadDeDigitos = 1;
    }
    while (numero != 0){
        numero /= 10;
        cantidadDeDigitos++;
    }
    cout << "El numero ingresado tiene " << cantidadDeDigitos << " digito(s)";
    return 0;
}