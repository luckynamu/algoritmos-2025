#include <iostream>
using namespace std;
//Usa punteros para invertir un array.
int main(){
    int vectorNumeros[5] = {3, 9, 12, 15, 18};
    for(int i = 0; i < 5 / 2; i++){
        int auxiliar = *(vectorNumeros + i);
        *(vectorNumeros + i) = *(vectorNumeros + 5 - 1 - i);
        *(vectorNumeros + 5 - 1 - i) = auxiliar;
    }
    for(int i = 0 ; i < 5; i++){
        cout << vectorNumeros[i] << endl;
    }
    return 0;
}