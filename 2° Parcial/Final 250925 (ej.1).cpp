#include <iostream>
using namespace std;
//Indique si el código compila. Si no compila, justifique, y sino, indique qué muestra por pantalla.
int main(){
    int numeros[10] = {101, 102, 103, 104, 105}; //Cont. del vector: 101 102 103 104 105 0 0 0 0 0
    int *ptr;
    ptr = numeros;
    *(ptr+9) = *ptr + *(numeros+3); // Pos. 9 = 101 + 104
    for(int i = 0; i < 10; i++){
        *(numeros+i) = *(ptr+i) + 1; //A cada elemento del vector le sumo 1. Numeros es lo mismo que ptr.
    }
    for(int i = 0; i < 10; i++){
        cout << numeros[i] << endl;
    }
    return 0;
    /*La salida es:
    102
    103
    104
    105
    106
    1
    1
    1
    1
    206
    */
}