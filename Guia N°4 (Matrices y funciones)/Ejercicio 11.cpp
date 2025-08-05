#include <iostream>
using namespace std;
/*Cargar una matriz de 5x5 y luego, mediante una función, verificar si todos los
elementos de su diagonal principal son iguales. Mostrar un mensaje adecuado desde el
programa Principal (main).*/
void cargarMatriz(int matriz[][5], int filas);
void mostrarMatriz(int matriz[][5], int filas);
bool elementosDiagonalIguales(int matriz[][5], int filas);

int main(){
    int matrizNumeros[5][5];
    cargarMatriz(matrizNumeros, 5);
    if (elementosDiagonalIguales(matrizNumeros, 5)){
        cout << "Los elementos de la diagonal principal son iguales" << endl;
    }
    else{
        cout << "Los elementos de la diagonal principal NO SON TODOS IGUALES" << endl;
    }
    cout << "Matriz: " << endl;
    mostrarMatriz(matrizNumeros, 5);
    return 0;
}

bool elementosDiagonalIguales(int matriz[][5], int filas){
    bool todosIguales = true;
    int numeroComparar = matriz[0][0];
    for (int i = 1; i < filas; i++){
        if (matriz[i][i] == numeroComparar){
            numeroComparar = matriz[i][i];
        }
        else{
            todosIguales = false;
            break;
        }
    }
    return todosIguales;
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