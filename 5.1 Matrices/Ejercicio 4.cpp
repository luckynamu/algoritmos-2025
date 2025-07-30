#include <iostream>
using namespace std;
/*Escriba un programa que determine si una matriz cuadrada de 3x3 es simétrica respecto a su diagonal
principal (es decir, que A[i][j] == A[j][i] para todo i y j).*/
void cargarMatriz(int matriz[][3], int filas);
void leerMatriz(int matriz[][3], int filas);
int main(){
    int matrizSimetrica[3][3];
    cargarMatriz(matrizSimetrica, 3);
    cout << "Matriz original: " << endl;
    leerMatriz(matrizSimetrica, 3);
    bool esSimetrica = true;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matrizSimetrica[i][j] != matrizSimetrica[j][i]){
                esSimetrica = false;
                break;
            }
        }
        if (!esSimetrica) break;
    }
    if (esSimetrica){
        cout << "La matriz es simetrica respecto a su diagonal principal.";
    }
    else{
        cout << "La matriz NO es simetrica";
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

void leerMatriz(int matriz[][3], int filas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}