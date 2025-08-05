#include <iostream>
using namespace std;
/*Cargar una matriz de 4x4, luego desarrollar una función que retorne cuántas filas
tienen todos sus elementos ordenados en forma creciente. Mostrar el resultado.*/
void cargarMatriz(int matriz[][4], int filas);
void mostrarMatriz(int matriz[][4], int filas);
int filasCrecientes(int matriz[][4], int filas);

int main(){
    int matrizNumeros[4][4];
    cargarMatriz(matrizNumeros, 4);
    int cantFilasCrecientes = filasCrecientes(matrizNumeros, 4);
    cout << "La matriz: " << endl;
    mostrarMatriz(matrizNumeros, 4);
    cout << "Tiene " << cantFilasCrecientes << " fila(s) creciente(s)";
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

int filasCrecientes(int matriz[][4], int filas){
    int filasCrecientes = 0;
    for (int i = 0; i < filas; i++){
        int contador = 0;
        for (int j = 0; j < 3; j++){
            if (matriz[i][j] < matriz[i][j+1]){
                contador++;
            }
        }
        if (contador == 3){
            filasCrecientes++;
        }
    }
    return filasCrecientes;
}