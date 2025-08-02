#include <iostream>
using namespace std;
/*Dado un vector de 30 números enteros, generar un segundo vector con los elementos que estén entre
dos valores ingresados por teclado (por ejemplo: entre 10 y 50). Mostrar el nuevo vector.*/
void cargarVector(int vector[], int longitud);
void mostrarVector(int vec[], int cantidad);
bool busquedaVector(int vector[], int longitud, int numero);

int main(){
    int vectorNumeros[30];
    cargarVector(vectorNumeros, 30);
    int nuevoVector[30];
    int x, y;
    cout << "Ingrese dos valores: ";
    cin >> x;
    cin >> y;
    int j = 0;
    bool coincidencias = false;
    for (int i = 0; i < 30; i++){
        if((vectorNumeros[i] > x && vectorNumeros[i] < y) || (vectorNumeros[i] > y && vectorNumeros[i] < x)){
            if (!busquedaVector(nuevoVector, j, vectorNumeros[i])){
                nuevoVector[j] = vectorNumeros[i];
                j++;
            }
            coincidencias = true;
        }
    }

    if (x > y){
        if (coincidencias){
            cout << "Los numeros del vector original que estan entre " << y << " y " << x << " son: " << endl;
            mostrarVector(nuevoVector, j);
        }
        else{
            cout << "No hay numeros del vector original que esten entre " << y << " y " << x;
        }    
    }
    else{
        if (coincidencias){
            cout << "Los numeros del vector original que estan entre " << x << " y " << y << " son: " << endl;
            mostrarVector(nuevoVector, j);
        }
        else{
            cout << "No hay numeros del vector original que esten entre " << x << " y " << y;
        }
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