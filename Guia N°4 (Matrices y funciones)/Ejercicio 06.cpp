#include <iostream>
using namespace std;
/*Cargar una matriz de 4x4 con números enteros y luego, mediante una función,
determinar el mayor valor de la matriz y en qué posición (fila y columna) se encuentra.
Mostrar esa información mediante una función llamada mostrarMayor.*/
void cargarMatriz(int matriz[][4], int filas);
void mostrarMatriz(int matriz[][4], int filas);
void mostrarMayor(int matriz[][4], int filas);

int main(){
    int matrizNumeros[4][4];
    cout << "Cargo la matriz" << endl;
    cargarMatriz(matrizNumeros, 4);
    cout << "La matriz es: " << endl;
    mostrarMatriz(matrizNumeros, 4);
    mostrarMayor(matrizNumeros, 4);
    return 0;   
}

void mostrarMayor(int matriz[][4], int filas){
    int valorMayor = matriz[0][0];
    int filaMayor[16];
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


void cargarMatriz(int matriz[][4], int filas){
    for(int i = 0; i < filas; i++){
        for (int j = 0; j < 4; j++){
            cout << "Ingrese un numero: ";
            cin >> matriz[i][j];
        }
    }
}

void mostrarMatriz(int matriz[][4], int filas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 4; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}