#include <iostream>
using namespace std;
/*Realice un algoritmo que permita cargar un array de 10 números enteros y luego
determine si un valor ingresado por el usuario existe dentro del array.*/
int main(){
    int numeros[10];
    for (int i = 0; i < 10; i++){
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }
    int numeroABuscar;
    int vecesQueAparece = 0;
    cout << "Ingrese el numero que quiere buscar en el array: ";
    cin >> numeroABuscar;
    for (int j = 0; j < 10; j++){
        if (numeros[j] == numeroABuscar){
            vecesQueAparece++;
        }
    }
    if (vecesQueAparece != 0){
        cout << "El numero que buscas esta en el array";
    }
    else{
        cout << "El numero no esta en el array";
    }
    return 0;
}