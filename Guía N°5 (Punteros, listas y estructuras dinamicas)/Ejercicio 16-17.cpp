#include <iostream>
using namespace std;
//Ej. 16) Crea un array de punteros a enteros.
//Ej. 17) Asigna dinámicamente valores a un array de punteros.
int main(){
    int *vectorPunteros[4];
    for(int i = 0; i < 4; i++){
        vectorPunteros[i] = new int(i + 10);
    }

    for(int i = 0; i < 4; i++){
        cout << *vectorPunteros[i] << " ";
    }

    for(int i = 0; i < 4; i++){
        delete vectorPunteros[i];
    }
    return 0;
}