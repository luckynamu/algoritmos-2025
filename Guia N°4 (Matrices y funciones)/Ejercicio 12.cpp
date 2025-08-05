#include <iostream>
using namespace std;
/*Cargar una matriz cuadrada de 4x4, luego crear una función que verifique si la matriz
es simétrica respecto a su diagonal principal. Mostrar el resultado con un mensaje claro.*/
void cargarMatriz(int matriz[][4], int filas);
void mostrarMatriz(int matriz[][4], int filas);
bool matrizSimetrica(int matriz[][4], int filas);

int main(){
    int matrizNumeros[4][4];
    cargarMatriz(matrizNumeros, 4);
    cout << "La matriz es: " << endl;
    mostrarMatriz(matrizNumeros, 4);
    if (matrizSimetrica(matrizNumeros, 4)){
        cout << "La matriz es simetrica respecto a su diagonal principal";
    }
    else{
        cout << "La matriz no es simetrica respecto a su diagonal principal";
    }
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

bool matrizSimetrica(int matriz[][4], int filas){
    bool esSimetrica = true;
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 4; j++){
            if (i != j){
                if (matriz[i][j] != matriz[j][i]){
                    esSimetrica = false;
                    break;
                }
            }
        }
    }
    return esSimetrica;
}