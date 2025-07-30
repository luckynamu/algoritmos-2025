#include <iostream>
using namespace std;
/*Elabore un programa que compare dos arrays de cinco enteros cada uno
e informe si ambos contienen los mismos valores en las mismas posiciones*/
void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: ";
        cin >> vector[i];
    }
}
int main(){
    int arrayUno[5];
    int arrayDos[5];
    cargarVector(arrayUno, 5);
    cargarVector(arrayDos, 5);
    int verificar = 0;
    for (int i = 0; i < 5; i++){
        if (arrayUno[i] == arrayDos[i]){
            cout << "El valor " << arrayUno[i] << " esta en ambos vectores en la posicion " << i << endl;
            verificar++;
        }
    }
    if (verificar == 0){
        cout << "No hay valores que coincidan con lo pedido";
    }
    return 0;
}