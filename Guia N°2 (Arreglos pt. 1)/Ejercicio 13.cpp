#include <iostream>
using namespace std;
/*Dado un vector de 20 elementos enteros, mostrar todos los elementos que están ubicados en
posiciones pares (índices 0, 2, 4, ...) y calcular su suma.*/
void cargarVector(int vector[], int longitud);

int main(){
    int vectorNumeros[20];
    int sumaTotal = 0;
    cargarVector(vectorNumeros, 20);
    for (int i = 0; i < 20; i++) {
        if (i % 2 == 0){
            sumaTotal += vectorNumeros[i];
            cout << vectorNumeros[i] << " ";
        }  
    }
    cout << "La suma de los numeros de posicion par es: " << sumaTotal;
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}