#include <iostream>
using namespace std;
//Cree un programa que genere la tabla de multiplicar de un número ingresado por el usuario, hasta el 12.
//variables: numerito, contador, producto de numero por contador
int main(){
    float numero;
    float producto;
    cout << "Ingresa el numero del que quieras saber sus tablas hasta el 12: ";
    cin >> numero;
    for (int i = 0; i <= 12; i++){
        producto = numero * i;
        cout << numero << " x " << i << " = " << producto << endl;
    }
    return 0;
}