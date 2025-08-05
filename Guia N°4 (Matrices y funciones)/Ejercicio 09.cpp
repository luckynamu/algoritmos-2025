#include <iostream>
using namespace std;
/*Cargar una matriz de 5x5 con números enteros, luego usar una función que calcule la
suma de la diagonal secundaria y devuelva el resultado. Mostrarlo el resultado.*/
void cargarMatriz(int matriz[][5], int filas);
void mostrarMatriz(int matriz[][5], int filas);
int sumaDiagonalSecundaria(int matriz[][5], int filas);

int main(){
    int matrizNumeros[5][5];
    cargarMatriz(matrizNumeros, 5);
    cout << "Matriz original: " << endl;
    mostrarMatriz(matrizNumeros, 5);
    int sumaDiagonal = sumaDiagonalSecundaria(matrizNumeros, 5);
    cout << "La suma de los elementos de la diagonal segundaria es: " << sumaDiagonal;
    return 0;
}

void cargarMatriz(int matriz[][5], int filas){
    for(int i = 0; i < filas; i++){
        for (int j = 0; j < 5; j++){
            cout << "Ingrese un numero: ";
            cin >> matriz[i][j];
        }
    }
}

void mostrarMatriz(int matriz[][5], int filas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 5; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int sumaDiagonalSecundaria(int matriz[][5], int filas){
    int suma = 0;
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 5; j++){
            if ((j + i) == (filas - 1)){
                suma += matriz[i][j];
            }
        }
    }
    return suma;
}