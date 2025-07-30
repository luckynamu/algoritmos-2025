#include <iostream>
using namespace std;
/*Implemente un programa que sume los elementos de cada fila en una matriz de 3x3
y muestre el resultado correspondiente a cada fila*/
void cargarMatriz(int matriz[][3], int filas);
void leerMatriz(int matriz[][3], int filas);
int main(){
    int matrizSuma[3][3];
    cargarMatriz(matrizSuma, 3);
    cout << "Matriz original: " << endl;
    leerMatriz(matrizSuma, 3);
    for (int i = 0; i < 3; i++){
        int sumaDeValores = 0;
        for (int j = 0; j < 3; j++){
            sumaDeValores += matrizSuma[i][j];
        }
        cout << "La suma de los valores de la fila " << i+1 << " es " << sumaDeValores << endl;  
    }
    return 0;
}

void leerMatriz(int matriz[][3], int filas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void cargarMatriz(int matriz[][3], int filas){
    for(int i = 0; i < filas; i++){
        for (int j = 0; j < 3; j++){
            cout << "Ingrese un numero: ";
            cin >> matriz[i][j];
        }
    }
}