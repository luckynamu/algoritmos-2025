#include <iostream>
using namespace std;
//Esto es para ver si un vector es simetrico, es decir, si su primer elemento coincide con el ultimo, y asi etc etc
bool esSimetrico(int vector[], int longitud){
    bool simetrico = true;
    for (int i = 0; i < longitud; i++){
        if(vector[i] != vector[longitud - 1 - i]){
            simetrico = false;
            break;
        }
    }
    return simetrico;
}