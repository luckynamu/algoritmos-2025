#include <iostream>
#include <cstring>
using namespace std;
//Crea una función que reciba un array como puntero y calcule la suma.
int sumaArray(int *array, int longitud);
int main(){
    int vectorNumeros[10] = {10, 20, 30, 50, 50, 50, 50, 50, 50, 50};
    int sumaElementos = sumaArray(vectorNumeros, 10);
    cout << sumaElementos;
    return 0;
}

int sumaArray(int *array, int longitud){
    int suma = 0;
    for (int i = 0; i < longitud; i++){
        suma += *(array + i);
    }
    return suma;
}