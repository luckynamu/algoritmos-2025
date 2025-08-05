#include <iostream>
using namespace std;
/*Cargar una matriz de 2x5 con números enteros, luego usar una función que cuente y
devuelva cuántos números pares hay en toda la matriz. Mostrar el resultado desde el programa principal.*/
void cargarMatriz(int matriz[][5], int filas);
void mostrarMatriz(int matriz[][5], int filas);
int cantidadDePares(int matriz[][5], int filas);

int main(){
    int matrizNumeros[2][5];
    cout << "Cargo la matriz" << endl;
    cargarMatriz(matrizNumeros, 2);
    cout << "La matriz es: " << endl;
    mostrarMatriz(matrizNumeros, 2);
    int numerosPares = cantidadDePares(matrizNumeros, 2);
    cout << "La matriz tiene " << numerosPares << " numeros pares";
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

int cantidadDePares(int matriz[][5], int filas){
    int cantPares = 0;
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 5; j++){
            if (matriz[i][j] % 2 == 0){
                cantPares++;
            }
        }
    }
    return cantPares;
}