#include <iostream>
#include <cstring>
using namespace std;
//Usa sizeof para comparar el tamaño de un puntero y una variable.
int main(){
    int numero = 400;
    int *ptrNumero = &numero;
    cout << "Mi variable ocupa " << sizeof(numero) << " bytes y su puntero ocupa " << sizeof(ptrNumero) << " bytes." << endl;
    return 0; 
}