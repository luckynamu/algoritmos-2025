#include <iostream>
using namespace std;
//Me indica cuantas veces aparece un numero en un vector

int aparicionesNumero(int vector[], int longitud, int numero){
    int apariciones = 0;
    for (int i = 0; i < longitud; i++){
        if (vector[i] == numero){
            apariciones++;
        }
    }
    return apariciones;
}