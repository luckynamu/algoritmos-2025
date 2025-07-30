#include <iostream>
using namespace std;
/*Elabore un algoritmo que permita cargar una matriz de 4x4 e imprima únicamente
los elementos ubicados por encima de la diagonal principal.*/
void cargarMatriz(int matriz[][4], int filas);
void leerMatriz(int matriz[][4], int filas);
int main(){
    int matrizDiagonalSuperior[4][4];
    cargarMatriz(matrizDiagonalSuperior, 4);
    cout << "Matriz original: " << endl;
    leerMatriz(matrizDiagonalSuperior, 4);

    cout << "Elementos por encima de la diagonal: " << endl;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (i < j){
                cout << matrizDiagonalSuperior[i][j] << " ";
            }
        }
        cout << endl;
    }
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
void leerMatriz(int matriz[][4], int filas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 4; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
