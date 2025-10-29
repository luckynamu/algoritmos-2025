#include <iostream>
using namespace std;
//Crea una función que reciba un puntero y devuelva el mayor valor del array.
int mayorValor(int *array, int longitud);

int main(){
    int vectorNumeros[5] = {2, 10, -10, 5, 7};
    int masGrande = mayorValor(vectorNumeros, 5);
    cout << "El valor mas grande del array es: " << masGrande;
    return 0;
}

int mayorValor(int *array, int longitud){
    int mayor = *array;
    for(int i = 1; i < longitud; i++){
        if(*(array + i) > mayor){
            mayor = *(array + i);
        }
    }
    return mayor;
}