#include <iostream>
using namespace std;
/*Leer un vector de 30 números enteros, permitiendo al usuario decidir cuántos valores desea cargar
inicialmente. El vector debe estar previamente ordenado en forma creciente. Luego permitir ingresar un
nuevo valor e insertarlo en la posición adecuada para mantener el orden creciente, desplazando a la
derecha los valores necesarios. Si el vector ya está lleno (30 elementos cargados), informar que no se
puede insertar. Mostrar el vector actualizado.*/
void mostrarVector(int vec[], int cantidad);
void cargarVector(int vector[], int longitud);
void bubbleSort(int array[], int longitud);

int main(){
    int vectorNumeros[30];
    int quieroCargar;
    cout << "Ingrese cuantos valores quiere cargar al vector (maximo 30): ";
    cin >> quieroCargar;
    ///
    if(quieroCargar > 30 || quieroCargar <= 0){
        while (quieroCargar > 30 || quieroCargar <= 0){
            cout << "Ingrese una cantidad valida de valores que quiera cargar al vector (max. 30): ";
            cin >> quieroCargar;
        }
    }
    ///
    cout << "Cargue su vector: " << endl;
    cargarVector(vectorNumeros, quieroCargar);
    bubbleSort(vectorNumeros, quieroCargar);
    cout << "Ingrese el valor que quiere cargar al vector: "; 
    int numeroCargar;
    cin >> numeroCargar;

    if (quieroCargar != 30){
        vectorNumeros[quieroCargar] = numeroCargar;
        quieroCargar++;
        bubbleSort(vectorNumeros, quieroCargar);
        cout << "El vector con el valor cargado, ordenado de forma creciente, es este: " << endl;
        mostrarVector(vectorNumeros, quieroCargar);
    }
    else{
        cout << "El numero no se puede cargar porque el vector esta lleno, aca te lo muestro: " << endl;
        mostrarVector(vectorNumeros, quieroCargar);
    }
    return 0;
}

void mostrarVector(int vec[], int cantidad){
    for (int i = 0; i < cantidad; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}

void bubbleSort(int array[], int longitud){
    for (int i = 0; i < longitud; i++ ){
        for (int j = 0; j < longitud - i - 1; j++){
            if (array[j] > array[j+1]){
                int auxiliar = array[j];
                array[j] = array[j+1];
                array[j+1] = auxiliar;
            }
        }
    }
}