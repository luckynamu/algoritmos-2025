#include <iostream>
using namespace std;
//Cree un algoritmo que permita calcular la suma de los dígitos de un número entero positivo.
int main(){
    int numero;
    int sumaDeDigitos = 0;
    cout << "Ingresa un numero entero positivo: ";
    cin >> numero;
    while (numero < 0){
        cout << "Ingresa un numero entero POSITIVO: ";
        cin >> numero;
    }
    int numeroOriginal = numero;
    while (numero > 0){
        int resto = numero % 10;
        sumaDeDigitos += resto;
        numero /= 10;
    }
    cout << "La suma de los digitos del numero " << numeroOriginal << " es: " << sumaDeDigitos;
    return 0; 
}