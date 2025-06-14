#include <iostream>
using namespace std;
// Algoritmo de bubble sort
int main(){
    int longitud = 10;
    int arreglo[longitud];
    for (int i = 0; i < longitud; i++ ){
        for (int j = 0; j < longitud - i - 1; j++){
            if (arreglo[j] > arreglo[j+1]){
                int auxiliar = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = auxiliar;
            }
        }
    }
    return 0;
}