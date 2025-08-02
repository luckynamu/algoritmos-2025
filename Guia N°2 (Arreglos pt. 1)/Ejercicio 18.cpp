#include <iostream>
using namespace std;
/*Dado un vector de 25 elementos, reemplazar los valores negativos por cero y mostrar el vector modificado.*/
void cargarVector(int vector[], int longitud);
void mostrarVector(int vec[], int cantidad);

int main(){
    int vectorNumeros[25];
    cargarVector(vectorNumeros, 25);
    cout << "Vector original: " << endl;
    mostrarVector(vectorNumeros, 25);
    for (int i = 0; i < 25; i++){
        if (vectorNumeros[i] < 0){
            vectorNumeros[i] = 0;
        }
    }
    cout << "Vector modificado: " << endl;
    mostrarVector(vectorNumeros, 25);
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}

void mostrarVector(int vec[], int cantidad){
    for (int i = 0; i < cantidad; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}