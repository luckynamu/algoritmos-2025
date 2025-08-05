#include <iostream>
using namespace std;
/*Cargar una matriz de 3x3 con números reales, luego calcular y mostrar el promedio de
todos los elementos utilizando una función.*/
void cargarMatriz(float matriz[][3], int filas);
void mostrarMatriz(float matriz[][3], int filas);
float promedioMatriz(float matriz[][3], int filas);

int main(){
    float matrizNumeros[3][3];
    cout << "Cargo la matriz" << endl;
    cargarMatriz(matrizNumeros, 3);
    cout << "La matriz es: " << endl;
    mostrarMatriz(matrizNumeros, 3);
    float promedioDeElementos = promedioMatriz(matrizNumeros, 3);
    cout << "El promedio de los elementos de la matriz es: " << promedioDeElementos;
    return 0;
}

void cargarMatriz(float matriz[][3], int filas){
    for(int i = 0; i < filas; i++){
        for (int j = 0; j < 3; j++){
            cout << "Ingrese un numero: ";
            cin >> matriz[i][j];
        }
    }
}

void mostrarMatriz(float matriz[][3], int filas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

float promedioMatriz(float matriz[][3], int filas){
    float sumaTotal = 0;
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 3; j++){
            sumaTotal += matriz[i][j];
        }
    }
    float promedio = sumaTotal/(3*filas);
    return promedio;
}