#include <iostream>
using namespace std;
/*Cargar dos matrices de 3x3 por teclado, luego usar una función que genere una tercera
matriz con la suma de los elementos correspondientes. Mostrar la nueva matriz con una función aparte.*/
void cargarMatriz(int matriz[][3], int filas);
void mostrarMatriz(int matriz[][3], int filas);
void matrizSuma(int matrizUno[][3], int matrizDos[3][3], int matrizCargar[][3], int filas);

int main(){
    int matrizNumero1[3][3];
    int matrizNumero2[3][3];
    int matrizNuevaSuma[3][3];
    cout << "Cargo la primer matriz" << endl;
    cargarMatriz(matrizNumero1, 3);
    cout << "Cargo la segunda matriz" << endl;
    cargarMatriz(matrizNumero2, 3);
    cout << "Las matrices son: " << endl;
    mostrarMatriz(matrizNumero1, 3);
    mostrarMatriz(matrizNumero2, 3);
    cout << "La matriz con la suma de los elementos correspondientes de las dos matrices es: " << endl;
    matrizSuma(matrizNumero1, matrizNumero2, matrizNuevaSuma, 3);
    mostrarMatriz(matrizNuevaSuma, 3);
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

void matrizSuma(int matrizUno[][3], int matrizDos[][3], int matrizCargar[][3], int filas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 3; j++){
            int suma = matrizUno[i][j] + matrizDos[i][j];
            matrizCargar[i][j] = suma;
        }
    }

}