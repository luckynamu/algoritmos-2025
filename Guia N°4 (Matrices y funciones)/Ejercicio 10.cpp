#include <iostream>
using namespace std;
/*Dada una matriz de 4x3, usar una función que reciba la matriz y un número ingresado
por el usuario, y determine si ese número se encuentra en la matriz. Mostrar un mensaje
desde el programa principal (main).*/
void cargarMatriz(int matriz[][3], int filas);
void mostrarMatriz(int matriz[][3], int filas);
bool busquedaMatriz(int matriz[][3], int filas, int numero);

int main(){
    int matrizNumeros[4][3];
    cout << "Cargo la matriz" << endl;
    cargarMatriz(matrizNumeros, 4);
    cout << "Matriz original: " << endl;
    mostrarMatriz(matrizNumeros, 4);
    int numeroBuscar;
    cout << "Ingrese el numero que quiere buscar en la matriz: ";
    cin >> numeroBuscar;
    if(!busquedaMatriz(matrizNumeros, 4, numeroBuscar)){
        cout << "El numero que buscas no se encuentra en la matriz";
    }
    else{
        cout << "El numero esta presente en la matriz";
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

void mostrarMatriz(int matriz[][3], int filas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

bool busquedaMatriz(int matriz[][3], int filas, int numero){
    bool estaPresente = false;
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 3; j++){
            if (matriz[i][j] == numero){
                estaPresente = true;
                break;
            }
        }
    }
    return estaPresente;
}