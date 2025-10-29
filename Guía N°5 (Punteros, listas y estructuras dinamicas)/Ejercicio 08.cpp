#include <iostream>
#include <cstring>
using namespace std;
//Declara un puntero nulo y verifica su estado.
bool esNulo(int *puntero);

int main(){
    int numero = 0;
    int *ptrPrueba = &numero;
    int *ptrNulo = NULL;
    if(esNulo(ptrPrueba)){
        cout << "Es nulo" << endl;
    }
    else{
        cout << "El puntero no es nulo y su valor es " << *ptrPrueba << endl;
    }
    if(esNulo(ptrNulo)){
        cout << "Es nulo" << endl;
    }
    else{
        cout << "El puntero no es nulo y su valor es " << *ptrPrueba << endl;
    }
    return 0;
}

bool esNulo(int *puntero){
    bool nulo = false;
    if (puntero == NULL){
        nulo = true;
    }
    return nulo;
}
