#include <iostream>
#include <cstring>
using namespace std;
//Crea una función que reciba un puntero y modifique el valor.
void modificarValor(int *puntero, int valor);

int main(){
    int numero = 10;
    int *ptrNumero = &numero;
    cout << "Valor anterior: " << numero << endl;
    modificarValor(ptrNumero, 50);
    cout << "Valor nuevo: " << numero << endl;
    return 0;
}

void modificarValor(int *puntero, int valor){
    *puntero = valor; 
}