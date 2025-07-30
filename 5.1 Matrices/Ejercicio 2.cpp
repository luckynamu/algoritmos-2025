#include <iostream>
using namespace std;
/*Realice un algoritmo que inicialice una matriz de 3x3 y muestre únicamente
los elementos pertenecientes a la diagonal principal.*/
void cargarMatriz(int matriz[][3], int filas);
int main(){
    int matrizDiagonal[3][3];
    cargarMatriz(matrizDiagonal, 3);
    cout << "Los elementos de la diagonal principal son: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i == j){
                cout << matrizDiagonal[i][j] << " ";
            }
        }
    }
    cout << endl << "Matriz original: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << matrizDiagonal[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

void cargarMatriz(int matriz[][3], int filas){
    for(int i = 0; i < filas; i++){
        for (int j = 0; j < 3; j++){
            cout << "Ingrese un numero: ";
            cin >> matriz[i][j];
        }
    }
}