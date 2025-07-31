#include <iostream>
using namespace std;
//Determina si un numero es par (si queda en falso, es impar)
bool esPar (int numerito){
    bool numeroPar = false;
    if (numerito % 2 == 0){
        numeroPar = true;
    }
    return numeroPar;
}