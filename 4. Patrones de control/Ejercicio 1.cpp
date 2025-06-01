#include <iostream>
using namespace std;
//Implemente un programa que imprima los primeros numeros naturales, siendo N un valor ingresado por el usuario.
int main(){
    int cantidadDeNumeros, numeroNatural;
    cout << "Ingrese la cantidad de numeros naturales que quiera imprimir: ";
    cin >> cantidadDeNumeros;
    while(cantidadDeNumeros <= 0){
       cout << "Ingrese la cantidad de numeros naturales que quiera imprimir: ";
       cin >> cantidadDeNumeros; 
    }
    //Empezamos el contador en 1 porque no consideramos al 0 como un natural.
    for (int i = 1; i <= cantidadDeNumeros; i++){
            numeroNatural = i;
            cout << numeroNatural << endl;
    }
    return 0;
}