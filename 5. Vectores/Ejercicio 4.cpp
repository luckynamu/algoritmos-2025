#include <iostream>
using namespace std;
/*Implemente un algoritmo que ordene un array de 10 elementos en orden ascendente (menor a mayor) y luego muestre
primero los números pares y luego los impares, manteniendo ese orden.*/
bool esPar(int numerito);
int main(){
    int numeros[10];
    for (int i = 0; i < 10; i++){
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }
//Ordenamiento bubble sort (menor a mayor)
    for (int i = 0; i < 10; i++ ){
        for (int j = 0; j < 10 - i - 1; j++){
            if (numeros[j] > numeros[j+1]){
                int auxiliar = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = auxiliar;
            }
        }
    }
// Imprimir primero pares y luego impares
    for (int k = 0; k < 10; k++){
        if (esPar(numeros[k])){
            cout << numeros[k] << endl;
        }
    }
    for (int k = 0; k < 10; k++){
        if (!esPar(numeros[k])){
            cout << numeros[k] << endl;
        }
    }
    return 0;
    
}
bool esPar (int numerito){
    bool numeroPar = false;
    if (numerito % 2 == 0){
        numeroPar = true;
    }
    return numeroPar;
}