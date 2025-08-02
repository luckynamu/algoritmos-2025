#include <iostream>
using namespace std;
/*Dada una lista de 20 números enteros, determinar cuántos valores positivos consecutivos
hay como máximo. Por ejemplo, si el vector es {5, 6, -1, 2, 3, 4, -2}, el máximo de positivos
consecutivos es 3 (2, 3, 4).*/
void cargarVector(int vector[], int longitud);

int main(){
    int vectorNumeros[20];
    cargarVector(vectorNumeros, 20);
    int maxPositivos = 0;
    int contadorPositivos = 0;
    int auxiliar = 0;
    for (int i = 0; i < 20; i++){
        if (vectorNumeros[i] > 0){
            contadorPositivos++;
            auxiliar = contadorPositivos;
        }
        else{
            contadorPositivos = 0;
            if (auxiliar > maxPositivos){
                maxPositivos = auxiliar;
            }
        }
    }
    cout << "El maximo de positivos consecutivos es de " << maxPositivos;
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}