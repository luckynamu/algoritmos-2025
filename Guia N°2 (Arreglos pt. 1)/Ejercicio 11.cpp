#include <iostream>
using namespace std;
/*Dada una lista de 30 números enteros leerla en un vector, luego mostrar cuántos
son mayores que el promedio de todos los elementos del vector.*/
float calcularPromedio(int vector[], int longitud);
void cargarVector(int vector[], int longitud);
int aparicionesNumero(int vector[], int longitud, int numero);
bool busquedaVector(int vector[], int longitud, int numero);

int main(){
    int vectorNumeros[30];
    int cantidadMayores = 0;
    int vectorMayores[30];
    cargarVector(vectorNumeros, 30);
    float promedio = calcularPromedio(vectorNumeros, 30);
    int j = 0;
    for (int i = 0; i < 30; i++){
        if(vectorNumeros[i] > promedio && !busquedaVector(vectorMayores, j, vectorNumeros[i])){
            vectorMayores[j] = vectorNumeros[i];
            j++;
            cantidadMayores++;
            cout << vectorNumeros[i] << " es mayor al promedio (" << promedio << ")" << endl;
        }
    }
    if (cantidadMayores == 0){
        cout << "No hay numeros del vector que sean mayores al promedio";
    }
    return 0;
}

float calcularPromedio(int vector[], int longitud){
    float promedio = 0;
    int sumaTotal = 0;
    for (int i = 0; i < longitud; i++){
        sumaTotal += vector[i];
    }
    promedio = sumaTotal/(float)longitud;
    return promedio;
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