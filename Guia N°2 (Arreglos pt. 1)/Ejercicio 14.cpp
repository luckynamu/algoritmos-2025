#include <iostream>
using namespace std;
/*Dada una lista de 15 números enteros, generar un segundo vector que contenga solamente los
números impares del primero. Mostrar ambos vectores.*/
void mostrarVector(int vec[], int cantidad);
void cargarVector(int vector[], int longitud);
bool esPar (int numerito);
bool busquedaVector(int vector[], int longitud, int numero);

int main(){
    int vectorNumeros[15];
    int vectorImpares[15];
    cargarVector(vectorNumeros, 15);
    int j = 0;
    for (int i = 0; i < 15; i++){
        if(!esPar(vectorNumeros[i]) && !busquedaVector(vectorImpares, j, vectorNumeros[i])){
            vectorImpares[j] = vectorNumeros[i];
            j++;
        }
    }
    cout << "Vector original: " << endl;
    mostrarVector(vectorNumeros, 15);
    cout << "Vector de impares: " << endl;
    mostrarVector(vectorImpares, j);
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}

bool esPar (int numerito){
    bool numeroPar = false;
    if (numerito % 2 == 0){
        numeroPar = true;
    }
    return numeroPar;
}

void mostrarVector(int vec[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
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