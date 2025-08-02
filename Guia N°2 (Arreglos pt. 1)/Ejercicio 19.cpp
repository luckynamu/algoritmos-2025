#include <iostream>
using namespace std;
/*Leer 15 números enteros en un vector. Luego crear un segundo vector donde cada elemento sea el
doble del elemento correspondiente del primer vector, pero solo si el valor original es múltiplo de 3. En
caso contrario, copiar el valor sin modificar.*/
bool esMultiplo(int numero, int multiplo);
void cargarVector(int vector[], int longitud);
void mostrarVector(int vec[], int cantidad);

int main(){
    int vectorNumeros[15];
    int vectorNuevo[15];
    cargarVector(vectorNumeros, 15);
    for (int i = 0; i < 15; i++){
        if (esMultiplo(vectorNumeros[i], 3)){
            vectorNuevo[i] = 2 * vectorNumeros[i];
        }
        else{
            vectorNuevo[i] = vectorNumeros[i];
        }
    }
    cout << "Vector original: " << endl;
    mostrarVector(vectorNumeros, 15);
    cout << "Vector modificado: " << endl;
    mostrarVector(vectorNuevo, 15);
    return 0;
}

bool esMultiplo(int numero, int multiplo){
    bool esUnMultiplo = false;
    if (numero % multiplo == 0){
        esUnMultiplo = true;
    }
    return esUnMultiplo;
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