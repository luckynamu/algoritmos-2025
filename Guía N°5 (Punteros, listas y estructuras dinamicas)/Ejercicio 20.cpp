#include <iostream>
using namespace std;
//Implementa una búsqueda lineal usando punteros.
bool busquedaLineal(int *vector, int longitud, int numero);

int main(){
    int vectorNumeros[5] = {1, 2, 3, 69, 70};
    int numeroEncontrado = busquedaLineal(vectorNumeros, 5, 100);
    if(numeroEncontrado){
        cout << "El 100 esta presente" << endl;
    }
    else{
        cout << "El 100 no esta en el array :(" << endl;
    }
    return 0;
}

bool busquedaLineal(int *vector, int longitud, int numero){
    bool estaPresente = false;
    for (int i = 0; i < longitud; i++){
        if (*(vector + i) == numero){
            estaPresente = true;
            break;
        }
    }
    return estaPresente;
}