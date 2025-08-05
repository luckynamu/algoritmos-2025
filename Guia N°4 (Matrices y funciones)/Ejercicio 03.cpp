#include <iostream>
using namespace std;
/*Cargar una matriz de 4x4 con números enteros, luego mostrar por pantalla, mediante
una función, la suma de los elementos de cada fila por separado.*/
void cargarMatriz(int matriz[][4], int filas);
void mostrarMatriz(int matriz[][4], int filas);
void sumaPorFila(int matriz[][4], int filas);

int main(){
    int matrizEnteros[4][4];
    cout << "Cargo la matriz" << endl;
    cargarMatriz(matrizEnteros, 4);
    cout << "Muestro la matriz" << endl;
    mostrarMatriz(matrizEnteros, 4);
    sumaPorFila(matrizEnteros, 4);
    return 0;
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

void sumaPorFila(int matriz[][4], int filas){
    for (int i = 0; i < filas; i++){
        int sumaDeFila = 0;
        for (int j = 0; j < 4; j++){
            sumaDeFila += matriz[i][j];
        }
        cout << "La suma de los elementos de la fila " << i+1 << " = " << sumaDeFila << endl;
    }
}