#include <iostream>
using namespace std;
/*Leer un vector de 30 números enteros. Luego generar dos nuevos vectores: uno que contenga solo los
números positivos y otro con los negativos. Mostrar ambos vectores y sus respectivos tamaños reales.*/
void cargarVector(int vector[], int longitud);
void mostrarVector(int vec[], int cantidad);
bool busquedaVector(int vector[], int longitud, int numero);

int main(){
    int vectorNumeros[30];
    cargarVector(vectorNumeros, 30);
    int vectorPositivos[30];
    int vectorNegativos[30];
    int cantPositivos = 0;
    int cantNegativos = 0;
    for (int i = 0; i < 30; i++){
        if(vectorNumeros[i] > 0 && !busquedaVector(vectorPositivos, cantPositivos, vectorNumeros[i])){
            vectorPositivos[cantPositivos] = vectorNumeros[i];
            cantPositivos++;
        }
        else if (vectorNumeros[i] < 0 && !busquedaVector(vectorNegativos, cantNegativos, vectorNumeros[i])){
            vectorNegativos[cantNegativos] = vectorNumeros[i];
            cantNegativos++;
        }
    }
    if (cantPositivos > 0){
        cout << "El vector con numeros positivos tiene un tamanio de " << cantPositivos << " y es: " << endl;
        mostrarVector(vectorPositivos, cantPositivos);
    }
    else{
        cout << "No hay numeros positivos en el vector original";
    }
    if (cantNegativos > 0){
        cout << "El vector con numeros negativos tiene un tamanio de " << cantNegativos << " y es: " << endl;
        mostrarVector(vectorNegativos, cantNegativos);
    }
    else{
        cout << "No hay numeros negativos en el vector original";
    }
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