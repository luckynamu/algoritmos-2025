#include <iostream>
using namespace std;
/*Dada una lista de 25 números enteros, calcular cuántos elementos hay que sean mayores que su
inmediato anterior en el vector (es decir, comparar vec[i] con vec[i-1] para i desde 1 a 24).*/
void cargarVector(int vector[], int longitud);

int main(){
    int vectorNumeros[25];
    int mayoresAlAnterior = 0;
    cargarVector(vectorNumeros, 25);
    for (int i = 1; i < 25; i++){
        if (vectorNumeros[i] > vectorNumeros[i-1]){
            cout << vectorNumeros[i] << " es mayor a " << vectorNumeros[i-1] << endl;
            mayoresAlAnterior++;
        }
    }
    if (mayoresAlAnterior == 0){
        cout << "No hay numeros en el vector que sean mayores a su anterior";
    }
    else{
        cout << "En total hay " << mayoresAlAnterior << " numeros que son mayores a su anterior";
    }
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}