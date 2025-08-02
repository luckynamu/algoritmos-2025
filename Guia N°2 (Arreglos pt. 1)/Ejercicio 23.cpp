#include <iostream>
using namespace std;
/*Leer un vector de 20 números enteros. Luego recorrerlo y detectar cuántas veces aparece una
secuencia creciente de al menos 3 valores consecutivos (por ejemplo: 4, 6, 8 se considera creciente si
6 > 4 y 8 > 6).*/
void cargarVector(int vector[], int longitud);
int main(){
    int vectorNumeros[20];
    cargarVector(vectorNumeros, 20);
    int secuenciasCrecientes = 0;
    int contador = 1;
    for (int i = 1; i < 20; i++){
        if (vectorNumeros[i] > vectorNumeros[i-1]){
            contador++;
        }
        else{
            if (contador >= 3){
            secuenciasCrecientes++;
            contador = 1;
            }
        }
    }
    
    if (contador >= 3){
        secuenciasCrecientes++;
    }

    if(secuenciasCrecientes > 0){
        cout << "En el vector hay " << secuenciasCrecientes << " secuencia/s creciente/s";
    }
    else{
        cout << "No hay secuencias crecientes en el vector";
    }
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}