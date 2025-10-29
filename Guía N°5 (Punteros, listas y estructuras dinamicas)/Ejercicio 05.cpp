#include <iostream>
#include <cstring>
using namespace std;
//Declara dos punteros y haz que apunten a la misma variable.
int main(){
    int numero = 30;
    int *ptrUno = &numero;
    int *ptrDos = &numero;
    cout << *ptrUno << " | " << *ptrDos << endl;
    *ptrUno = 50;
    //Si utilizo un solo puntero para cambiar el valor de mi variable, se actualiza el otro tambien.
    cout << *ptrUno << " | " << *ptrDos;
    return 0;
}