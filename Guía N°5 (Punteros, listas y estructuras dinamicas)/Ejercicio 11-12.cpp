#include <iostream>
#include <cstring>
using namespace std;
//Ej. 11) Declara un array y accede a sus elementos usando punteros.
//Ej. 12) Imprime todos los elementos de un array usando aritmética de punteros.
int main(){
    int vectorNumeros[10] = {15, 25, 35, 45, 55, 65, 75, 85, 95, 105};
    //Mi puntero apunta al primero elemento del vector.
    int *ptrNumeros = vectorNumeros;
    for (int i = 0; i < 10; i++){
        cout << *(ptrNumeros + i) << endl;
    }
    return 0;
}