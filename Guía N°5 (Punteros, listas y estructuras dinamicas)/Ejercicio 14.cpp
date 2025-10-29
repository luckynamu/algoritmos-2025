#include <iostream>
#include <cstring>
using namespace std;
//Modifica los elementos de un array dentro de una función usando punteros.
void modificarElementos(int *array, int longitud);

int main(){
    int vectorNumeros[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    modificarElementos(vectorNumeros, 10);
    for(int i = 0; i < 10; i++){
        cout << *(vectorNumeros + i) << endl;
    }
    return 0;
}

void modificarElementos(int *array, int longitud){
    for(int i = 0; i < longitud; i++){
        cout << "Elemento " << i + 1 << ": " << *(array + i) << endl;
        int reemplazo;
        cout << "Ingrese el valor por el cual quiera reemplazarlo: " << endl;
        cin >> reemplazo;
        *(array + i) = reemplazo;
    }
}