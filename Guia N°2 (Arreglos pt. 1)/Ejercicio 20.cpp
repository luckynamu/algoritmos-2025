#include <iostream>
using namespace std;
/*Leer un vector de 20 elementos. Luego permitir que el usuario ingrese un número y, si está en el vector,
eliminarlo (dejando los valores restantes desplazados hacia la izquierda y completando con cero al
final). Mostrar el vector resultante.*/
void cargarVector(int vector[], int longitud);
void mostrarVector(int vec[], int cantidad);
bool busquedaVector(int vector[], int longitud, int numero);

int main(){
    int vectorNumeros[20];
    int nuevoVector[20];
    cargarVector(vectorNumeros, 20);
    int numeroBuscar;
    cout << "Ingrese el numero que quiere eliminar del vector: ";
    cin >> numeroBuscar;
    int j = 0;
    if (busquedaVector(vectorNumeros, 20, numeroBuscar)){
        for (int i = 0; i < 20; i++){
            if (vectorNumeros[i] != numeroBuscar){
            nuevoVector[j] = vectorNumeros[i];
            j++;
            }
        }
        for (int k = j; k < 20; k++){
            nuevoVector[k] = 0;
        }   
        cout << "Vector original: " << endl;
        mostrarVector(vectorNumeros, 20);
        cout << "Vector modificado: " << endl;
        mostrarVector(nuevoVector, 20);
    }
    else{
        cout << "El numero que queres eliminar no se encuentra en el vector";
    }
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}

void mostrarVector(int vec[], int cantidad){
    for (int i = 0; i < cantidad; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
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