#include <iostream>
using namespace std;
/*Dada una lista de 10 números enteros leerla en un vector, luego determinar y mostrar por pantalla
cuántos números son pares y cuántos impares.*/
void cargarVector(int vector[], int longitud);
bool esPar (int numerito);
void mostrarVector(int vec[], int cantidad);

int main(){
    int vectorNumeros[10];
    int vectorPares[10];
    int vectorImpares[10];
    int j = 0;
    int k = 0;
    cargarVector(vectorNumeros, 10);
    for (int i = 0; i < 10; i++){
        if (esPar(vectorNumeros[i])){
            vectorPares[j] = vectorNumeros[i];
            j++;
        }
        else{
            vectorImpares[k] = vectorNumeros[i];
            k++;
        }
    }
    cout << "Los numeros pares del vector ingresado son " << j << " y son: " ;
    mostrarVector(vectorPares, j);
    cout << "Los numeros impares del vector ingresado son  " << k << " y son: ";
    mostrarVector(vectorImpares, k);
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: ";
        cin >> vector[i];
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