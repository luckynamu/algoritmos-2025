#include <iostream>
using namespace std;
/*Dado un vector, determinar cuál es el valor más grande y en qué posición se encuentra.*/
void cargarVector(int vector[], int longitud);

int main(){
    int vectorNumeros[10];
    cargarVector(vectorNumeros, 10);
    int masGrande = vectorNumeros[0];
    int posicionGrande = 0;
    for (int i = 0; i < 10; i++){
        if (vectorNumeros[i] > masGrande){
            masGrande = vectorNumeros[i];
            posicionGrande = i+1;
        }
    }
    cout << "El valor mas grande del vector es: " << masGrande << " y su posicion es " << posicionGrande;
    return 0;
}














void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}