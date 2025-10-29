#include <iostream>
#include <cstring>
using namespace std;

int main(){
    //Ej. 1) Declara un puntero a entero y asígnale la dirección de una variable.
    int numero = 10;
    int *ptrNumero;
    ptrNumero = &numero;
    //Ej. 2) Imprime la dirección de una variable usando &
    cout << "La direccion de la variable numero es: " << &numero << endl;
    //Ej. 3) Usa * para acceder al valor apuntado por un puntero.
    cout << "El valor al que apunta mi ptrNumero es: " << *ptrNumero << endl;
    //Ej. 4) Cambia el valor de una variable usando su puntero.
    *ptrNumero = 20;
    cout << "El nuevo valor de la variable numero es: " << numero << endl;
    return 0;
}