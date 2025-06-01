#include <iostream>
using namespace std;
/*Diseñe un programa que lea una cantidad indeterminada de números hasta que el usuario
ingrese cero, y luego calcule el promedio de los mismos.*/
int main(){
    float numero;
    int contador = 0;
    float sumaDeNumeros = 0;
    float promedio = 0;
    cout << "Ingresa todos los numeros que quieras y usa el 0 para terminar: " << endl;
    cin >> numero;
    while (numero != 0){
        sumaDeNumeros+=numero;
        contador++;
        cout << "Ingresa todos los numeros que quieras y usa el 0 para terminar: " << endl;
        cin >> numero;
    }
    if (contador != 0){
        promedio = sumaDeNumeros/contador;
        cout << "El promedio de estos numeros es: " << promedio;
    }
    else {
        cout << "No ingresaste numeros nenito, asi no puedo calcular nada";
    } 
    return 0;
}