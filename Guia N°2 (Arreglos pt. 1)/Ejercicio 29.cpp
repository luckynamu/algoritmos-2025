#include <iostream>
using namespace std;
/*Leer un vector de 15 números enteros. Luego verificar si todos los elementos son distintos entre sí (no
hay duplicados). Mostrar un mensaje adecuado.*/

void cargarVector(int vector[], int longitud);
int aparicionesNumero(int vector[], int longitud, int numero);
bool busquedaVector(int vector[], int longitud, int numero);

int main(){
    int vectorNumeros[15];
    int numerosDuplicados[10];
    int vectorApariciones[10];
    int j = 0;
    cargarVector(vectorNumeros, 15);
    for (int i = 0; i < 15; i++){
        int apariciones = aparicionesNumero(vectorNumeros, 15, vectorNumeros[i]);
        if (apariciones > 1 && !busquedaVector(numerosDuplicados, j, vectorNumeros[i])){
            numerosDuplicados[j] = vectorNumeros[i];
            vectorApariciones[j] = apariciones;
            j++;
        }
    }
    if (j > 0){
        cout << "Hay duplicados en el vector que son de los siguientes numeros: " << endl;
        for (int k = 0; k < j; k++){
            cout << "Numero " << numerosDuplicados[k] <<  " (" << vectorApariciones[k] << " veces)" << endl;
        }
    }
    else{
        cout << "Todos los elementos del vector son distintos entre si";
    }
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
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