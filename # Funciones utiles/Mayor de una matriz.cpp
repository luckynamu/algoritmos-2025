#include <iostream>
using namespace std;

void mostrarMayor(int matriz[][4], int filas){
    int valorMayor = matriz[0][0];
    int filaMayor[16]; //fila x columna (4x4=16)
    int columnaMayor[16];
    int k = 0;
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 4; j++){
            if (matriz[i][j] > valorMayor){
                k = 0;
                valorMayor = matriz[i][j];
                filaMayor[k] = i+1; 
                columnaMayor[k] = j+1;
                k++;
            }
            else if(matriz[i][j] == valorMayor){
                filaMayor[k] = i+1;
                columnaMayor[k] = j+1;
                k++;
            }
        }
    }
    if (k == 1){
        cout << "El mayor valor de la matriz es el " << valorMayor << " y se encuentra en la fila " << filaMayor[0] << ", columna " << columnaMayor[0];
    }
    if (k > 1){
        cout << "El mayor valor de la matriz es el " << valorMayor << " y se encuentra en las posiciones:  " << endl;
        for (int i = 0; i < k; i++){
            cout << "Fila " << filaMayor[i] << ", columna " << columnaMayor[i] << endl;
        }
    }
}