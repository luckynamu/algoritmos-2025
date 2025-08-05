#include <iostream>
using namespace std;
/*Dada una matriz de 3x5, usar una función para contar cuántos elementos son múltiplos
de un número ingresado por el usuario. Mostrar el resultado.*/
void cargarMatriz(int matriz[][5], int filas);
void mostrarMatriz(int matriz[][5], int filas);
int multiplosDe(int matriz[][5], int filas, int numeroMultiplo);

int main(){
    int matrizNumeros[3][5];
    cout << "Cargo la matriz" << endl;
    cargarMatriz(matrizNumeros, 3);
    cout << "La matriz es: " << endl;
    mostrarMatriz(matrizNumeros, 3);
    int numeroIngresado;
    cout << "Ingrese el numero del que quiere averiguar cuantos numeros de la matriz son multiplos: ";
    cin >> numeroIngresado;
    int cantidadDeMultiplos = multiplosDe(matrizNumeros, 3, numeroIngresado);
    cout << "El numero " << numeroIngresado << " tiene " << cantidadDeMultiplos << " numeros que son multiplos de este en la matriz";
    return 0;
}

int multiplosDe(int matriz[][5], int filas, int numeroMultiplo){
    int cantMult = 0;
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 5; j++){
            if (matriz[i][j] % numeroMultiplo == 0){
                cantMult++;
            }
        }
    }
    return cantMult;
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