#include <iostream>
using namespace std;
//Con esta funcion calculamos el promedio de la suma de todos los elementos de un vector :D
float calcularPromedio(int vector[], int longitud){
    float promedio = 0;
    int sumaTotal = 0;
    for (int i = 0; i < longitud; i++){
        sumaTotal += vector[i];
    }
    promedio = sumaTotal/(float)longitud;
    return promedio;
}