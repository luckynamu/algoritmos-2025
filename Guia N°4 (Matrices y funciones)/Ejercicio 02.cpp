#include <iostream>
using namespace std;
/*Cargar una matriz de 3x4 con números enteros, luego usar una función para calcular y
devolver la suma total de sus elementos, y mostrar el resultado desde el programa principal.*/
void cargarMatriz(int matriz[][4], int filas);
void mostrarMatriz(int matriz[][4], int filas);
int sumaElementos(int matriz[][4], int filas);

int main(){
    int matrizEnteros[3][4];
    cout << "Cargo la matriz" << endl;
    cargarMatriz(matrizEnteros, 3);
    cout << "La matriz es: " << endl;
    mostrarMatriz(matrizEnteros, 3);
    int sumaTotalMatriz = sumaElementos(matrizEnteros, 3);
    cout << "La suma de los elementos de la matriz da: " << sumaTotalMatriz;
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

int sumaElementos(int matriz[][4], int filas){
    int suma = 0;
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 4; j++){
            suma += matriz[i][j];
        }
    }
    return suma;
}