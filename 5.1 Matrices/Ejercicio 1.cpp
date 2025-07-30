#include <iostream>
using namespace std;
/*Desarrolle un programa que permita ingresar valores enteros en una matriz de 2 filas
por 2 columnas y luego imprima la matriz completa.*/
int main(){
    int matriz[2][2]; //Fila x Columna -> i x j
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << "Ingrese un numero: ";
            cin >> matriz[i][j];
        }
    }
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}