#include <iostream>
using namespace std;
//Busco un numero o el dato que quiera en una matriz
bool busquedaMatriz(int matriz[][5], int filas, int numero){
    bool estaPresente = false;
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 5; j++){
            if (matriz[i][j] == numero){
                estaPresente = true;
                break;
            }
        }
    }
    return estaPresente;
}