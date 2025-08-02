#include <iostream>
using namespace std;
//Con esta funcion podes saber si un numero ingresado es multiplo de otro o no
bool esMultiplo(int numero, int multiplo){
    bool esUnMultiplo = false;
    if (numero % multiplo == 0){
        esUnMultiplo = true;
    }
    return esUnMultiplo;
}