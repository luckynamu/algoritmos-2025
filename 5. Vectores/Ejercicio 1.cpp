#include <iostream>
using namespace std;
/*Escriba un programa que permita al usuario ingresar cinco números enteros, almacenarlos en un
array y mostrarlos en orden inverso al ingresado.*/
int main(){
    int numeros[5];
    for (int i = 0; i < 5; i++){
        cout << "Ingrese un numero entero: ";
        cin >> numeros[i];
    }
    for (int j = 4; j >= 0; j-- ){
        cout << numeros[j] << endl;
    }
    return 0;
}
