#include <iostream>
using namespace std;
/*Dada una lista de 40 números enteros, determinar cuántas veces se repite el número que aparece con
mayor frecuencia (moda). Mostrar ese número y la cantidad de repeticiones.*/
int aparicionesNumero(int vector[], int longitud, int numero);
void cargarVector(int vector[], int longitud);
bool busquedaVector(int vector[], int longitud, int numero);
void mostrarVector(int vec[], int cantidad);

int main(){
    int vectorNumeros[40];
    int vectorModa[40];
    int repeticionesModa = 0;
    cargarVector(vectorNumeros, 40);
    int cantModas = 0;
    for (int i = 0; i < 40; i++){
        int apariciones = aparicionesNumero(vectorNumeros, 40, vectorNumeros[i]);
        if (apariciones > repeticionesModa){
            repeticionesModa = apariciones;
        }
    }
    for (int i = 0; i < 40; i++){
        int repeticiones = aparicionesNumero(vectorNumeros, 40, vectorNumeros[i]);
        if(repeticiones == repeticionesModa && !busquedaVector(vectorModa, cantModas, vectorNumeros[i])){
            vectorModa[cantModas] = vectorNumeros[i];
            cantModas++;
        }
    }

    if(repeticionesModa == 1){
        cout << "Todos los numeros del vector se repiten una vez, no hay moda";
    }
    else{
        if(cantModas == 1){
            cout << "El numero moda es " << vectorModa[0] << " y se repite " << repeticionesModa << " veces";
        }
        else{
            cout << "Los numeros moda son ";
            mostrarVector(vectorModa, cantModas);
            cout << "y se repiten " << repeticionesModa << " veces";
        }
    }
    return 0;
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

void mostrarVector(int vec[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << vec[i] << " ";
    }
}