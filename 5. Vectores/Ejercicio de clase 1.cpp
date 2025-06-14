#include <iostream>
using namespace std;

void contarNumeros(int valor, int vec[], int veces[], int &largo);
void mostrarRepeticiones(int vec[], int veces[], int largo);

int main(){
    int numero, numeros[50], repeticiones[50], longitud;
    longitud = 0;
    cout << "Ingrese un numero (0 para terminar): " << endl;
    cin >> numero;
    while( numero != 0){
        contarNumeros(numero, numeros, repeticiones, longitud);
        cout << "Ingrese un numero (0 para terminar): " << endl;
        cin >> numero;
    }
    mostrarRepeticiones(numeros, repeticiones, longitud);
    return 0;
}

void contarNumeros(int valor, int vec[], int veces[], int &largo){
bool apareceEnElVector = false;
for (int i = 0; i < largo; i++ ){
    if (valor == vec[i]){
        veces[i]++;
        apareceEnElVector = true;
    }
}
    if(!apareceEnElVector){
        vec[largo] = valor;
        veces[largo] = 1;
        largo++;
    }
}

void mostrarRepeticiones(int vec[], int veces[], int largo){
    cout << "Numero     Repeticiones" << endl;
    for (int i = 0; i < largo; i++){
    cout << vec[i] << "     " << veces[i] << endl;
    }
}