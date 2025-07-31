#include <iostream>
using namespace std;
/*Dado un vector de 30 elementos detectar si hay elementos duplicados en el mismo.
No se necesita ordenar, sólo buscar coincidencias.*/
void cargarVector(int vector[], int longitud);
int aparicionesNumero(int vector[], int longitud, int numero);
void mostrarVector(int vec[], int cantidad);
bool busquedaVector(int vector[], int longitud, int numero);

int main(){
    int vectorNumeros[30];
    int numerosRepetidos[30];
    cargarVector(vectorNumeros, 30);
    cout << "El vector es: " << endl;
    mostrarVector(vectorNumeros, 30);
    int j = 0;
    int auxiliar = 0;
    for (int i = 0; i < 30; i++){
        if(aparicionesNumero(vectorNumeros, 30, vectorNumeros[i]) > 1){
            if(!busquedaVector(numerosRepetidos, j, vectorNumeros[i])){
                numerosRepetidos[j] = vectorNumeros[i];
                j++;
                int aparicionesNum = aparicionesNumero(vectorNumeros, 30, vectorNumeros[i]);
                cout << "El numero " << vectorNumeros[i] << " aparece " << aparicionesNum << " veces" << endl;
            }
        }
        else{
            auxiliar++;
        }
    }
    if (auxiliar == 30){
        cout << "No hay elementos duplicados en este vector";
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