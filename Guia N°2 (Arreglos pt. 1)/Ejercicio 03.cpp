#include <iostream>
using namespace std;
/*Dada una lista de 20 números enteros leerla en un vector, luego ingresar un número por teclado
e indicar si está presente en el vector (búsqueda secuencial).*/
void cargarVector(int vector[], int longitud);
bool busquedaVector(int vector[], int longitud, int numero);

int main(){
    int vectorNumeros[20];
    cargarVector(vectorNumeros, 20);
    int numeroBuscar;
    cout << "Ingrese el numero que quiere buscar en el vector: ";
    cin >> numeroBuscar;
    if(busquedaVector(vectorNumeros, 20, numeroBuscar)){
        cout << "El numero que buscas esta en el vector";
    }
    else{
        cout << "El numero que buscas NO SE ENCUENTRA en el vector";
    }
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}

bool busquedaVector(int vector[], int longitud, int numero){
    bool estaPresente = false;
    for (int i = 0; i < longitud; i++){
        if (vector[i] == numero){
            estaPresente = true;
            break;
        }
    }
    return estaPresente;
}