#include <iostream>
using namespace std;
/*Dada una lista de 15 números reales leerla en un vector, luego calcular
el promedio de los valores del mismo.*/
void cargarVector(float vector[], int longitud);

int main(){
    float vectorNumeros[15];
    cargarVector(vectorNumeros, 15);
    float sumaTotal = 0;
    float promedio = 0;
    for (int i = 0; i < 15; i++){
        sumaTotal += vectorNumeros[i];
    }
    promedio = sumaTotal/15;
    cout << "El promedio de los numeros del vector es: " << promedio;
    return 0;
}

void cargarVector(float vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}