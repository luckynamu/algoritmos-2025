#include <iostream>
using namespace std;
/*Ingresar un número por teclado y contar cuántas veces aparece en un vector de
20 elementos cargado previamente.*/
void cargarVector(int vector[], int longitud);
bool busquedaVector(int vector[], int longitud, int numero);
int aparicionesNumero(int vector[], int longitud, int numero);

int main(){
    int vectorNumeros[20];
    cargarVector(vectorNumeros, 20);
    int numero;
    cout << "Ingresa un numero para buscar en el vector: ";
    cin >> numero;
    int aparicionesNum = 0;
    if (busquedaVector(vectorNumeros, 20, numero)){
        aparicionesNum = aparicionesNumero(vectorNumeros, 20, numero);
        cout << "El numero " << numero << " aparece " << aparicionesNum << " veces";
    }
    else{
        cout << "El numero no aparece en el vector";
    }
    return 0;
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

int aparicionesNumero(int vector[], int longitud, int numero){
    int apariciones = 0;
    for (int i = 0; i < longitud; i++){
        if (vector[i] == numero){
            apariciones++;
        }
    }
    return apariciones;
}