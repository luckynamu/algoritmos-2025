#include <iostream>
using namespace std;
/*Dada una lista de 12 números leerla en un vector y luego crear otro vector
que contenga los mismos elementos pero en orden inverso*/
void cargarVector(int vector[], int longitud);
void mostrarVector(int vec[], int cantidad);

int main(){
    int vectorNumeros[12];
    int vectorInverso[12];
    cargarVector(vectorNumeros, 12);
    int j = 11;
    for (int i = 0; i < 12; i++){
        vectorInverso[i] = vectorNumeros[j];
        j--;
    }
    cout << "El vector inverso es: ";
    mostrarVector(vectorInverso, 12);
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}

void mostrarVector(int vec[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}