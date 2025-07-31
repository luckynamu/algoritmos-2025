#include <iostream>
using namespace std;
/*Dados dos vectores de igual longitud, generar un tercer vector con
la suma de los elementos correspondientes.*/
void cargarVector(int vector[], int longitud);
void mostrarVector(int vec[], int cantidad);
int main(){
    int vectorUno[10];
    int vectorDos[10];
    int vectorSuma[10];
    cout << "Carga el primer vector: " << endl;
    cargarVector(vectorUno, 10);
    cout << "Carga el segundo vector: " << endl;
    cargarVector(vectorDos, 10);
    for (int i = 0; i < 10; i++){
        vectorSuma[i] = vectorUno[i] + vectorDos[i];
    }
    cout << "El vector con la suma de los elementos de los otros dos es: ";
    mostrarVector(vectorSuma, 10);
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