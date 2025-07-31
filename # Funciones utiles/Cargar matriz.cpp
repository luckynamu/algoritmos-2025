#include <iostream>
using namespace std;
//El tipo de dato de la matriz puede variar
void cargarMatriz(int matriz[][3], int filas){ //Si o si hay que especificar el tamaño de la columna
    //Fila x Columna -> i x j
    for(int i = 0; i < filas; i++){
        for (int j = 0; j < 3; j++){
            cout << "Ingrese un numero: ";
            cin >> matriz[i][j]; //Si es struct, matriz.parteDelStruct[i][j] y lo vamos tuneando
        }
    }
}