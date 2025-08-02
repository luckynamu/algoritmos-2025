#include <iostream>
using namespace std;
/*Dado un vector de 15 enteros, invertir sus elementos en el mismo vector, sin usar un segundo arreglo auxiliar.*/
void mostrarVector(int vec[], int cantidad);
void cargarVector(int vector[], int longitud);

int main(){
    int vectorNumeros[15];
    cargarVector(vectorNumeros, 15);
    cout << "El vector original es: " << endl;
    mostrarVector(vectorNumeros, 15);
    for (int i = 0; i < 15/2; i++){
        int auxiliar = vectorNumeros[i];
        vectorNumeros[i] = vectorNumeros[15 - i - 1];
        vectorNumeros[15 - i - 1] = auxiliar;
    }
    cout << "El vector con sus elementos invertidos es: " << endl;
    mostrarVector(vectorNumeros, 15);
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