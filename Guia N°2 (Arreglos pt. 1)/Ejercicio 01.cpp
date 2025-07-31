#include <iostream>
using namespace std;
/*Dada una lista de 20 números enteros leerla en un vector, luego calcular
la suma total de sus elementos y mostrarla.*/
void cargarVector(int vector[], int longitud);

int main(){
    int vectorNumeros[20];
    cargarVector(vectorNumeros, 20);
    int sumaTotal = 0;
    for (int i = 0; i < 20; i++){
        sumaTotal += vectorNumeros[i];
    }
    cout << "La suma total de los numeros del vector es " << sumaTotal;
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: ";
        cin >> vector[i];
    }
}