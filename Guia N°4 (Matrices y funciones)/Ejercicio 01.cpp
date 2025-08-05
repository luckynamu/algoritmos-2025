#include <iostream>
using namespace std;
/*Cargar una matriz de 3x3 por teclado usando una función, luego mostrarla por pantalla
con otra función que recorra la matriz.*/
void cargarMatriz(int matriz[][3], int filas);
void mostrarMatriz(int matriz[][3], int filas);

int main(){
    int matrizNumeros[3][3];
    cout << "Cargo la matriz" << endl;
    cargarMatriz(matrizNumeros, 3);
    cout << "Muestro la matriz" << endl;
    mostrarMatriz(matrizNumeros, 3);
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

void mostrarMatriz(int matriz[][3], int filas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}