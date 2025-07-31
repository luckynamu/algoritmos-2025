#include <iostream>
using namespace std;
/*A partir de un vector de 10 números enteros crear un nuevo vector con los elementos mayores a un
valor X ingresado por el usuario.*/
void cargarVector(int vector[], int longitud);
void mostrarVector(int vec[], int cantidad);

int main(){
    int vectorNumeros[10];
    int vectorMayores[10];
    int numeroX;
    cargarVector(vectorNumeros, 10);
    cout << "Ingrese el numero X a comparar: ";
    cin >> numeroX;
    int j = 0;
    for (int i = 0; i < 10; i++){
        if(vectorNumeros[i] > numeroX){
            vectorMayores[j] = vectorNumeros[i];
            j++;
        }
    }
    if (j != 0){
        cout << "Los numeros mayores a " << numeroX << " son: ";
        mostrarVector(vectorMayores, j);
    }
    else{
        cout << "No hay numeros mayores a " << numeroX << " en el vector";
    }
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}
void mostrarVector(int vec[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}