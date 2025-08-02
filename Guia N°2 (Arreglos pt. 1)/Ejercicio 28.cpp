#include <iostream>
using namespace std;
/*Leer 20 números enteros en un vector. Luego determinar si la suma de los elementos en las posiciones
impares es igual a la suma de los elementos en las posiciones pares.*/
void cargarVector(int vector[], int longitud);

int main(){
    int vectorNumeros[20];
    cargarVector(vectorNumeros, 20);
    int sumaPares = 0;
    int sumaImpares = 0;
    for (int i = 0; i < 20; i++){
        if (i % 2 == 0){
            sumaPares += vectorNumeros[i];
        }
        else{
            sumaImpares += vectorNumeros[i];
        }
    }
    if (sumaPares == sumaImpares){
        cout << "La suma de los elementos en las posiciones impares = la suma de los elementos en las posiciones pares, y el resultado es: " << sumaPares;
    }
    else{
        cout << "La suma de los elementos de posiciones pares y la suma de los elementos de pos. impares no son iguales." << endl;
        cout << "Suma pares: " << sumaPares << endl;
        cout << "Suma impares: " << sumaImpares << endl;
    }
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}