#include <iostream>
using namespace std;
/*Leer un vector de 20 elementos. Luego permitir al usuario ingresar un número y reemplazar todas sus
apariciones por el valor -1. Mostrar el vector modificado.*/
void mostrarVector(int vec[], int cantidad);
void cargarVector(int vector[], int longitud);
bool busquedaVector(int vector[], int longitud, int numero);

int main(){
    int vectorNumeros[20];
    int numeroBuscar;
    cargarVector(vectorNumeros, 20);
    cout << "El vector original es: " << endl;
    mostrarVector(vectorNumeros, 20);
    cout << "Ingrese el numero que quiere reemplazar en el vector: ";
    cin >> numeroBuscar;
    if(busquedaVector(vectorNumeros, 20, numeroBuscar)){
        for (int i = 0; i < 20; i++){
            if (vectorNumeros[i] == numeroBuscar){
                vectorNumeros[i] = -1;
            }
        }
        cout << "El vector modificado es: " << endl;
        mostrarVector(vectorNumeros, 20);
    }
    else{
        cout << "El numero que queres reemplazar no se encuentra en el vector";
    }
    return 0;
}

void mostrarVector(int vec[], int cantidad){
    for (int i = 0; i < cantidad; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}

bool busquedaVector(int vector[], int longitud, int numero){
    bool estaPresente = false;
    for (int i = 0; i < longitud; i++){
        if (vector[i] == numero){
            estaPresente = true;
            break;
        }
    }
    return estaPresente;
}