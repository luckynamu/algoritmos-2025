#include <iostream>
using namespace std;
//Implemente un programa que determine si un número ingresado es primo.
int main(){
    float numero;
    bool esPrimo = true;
    cout << "Ingresa un numero: ";
    cin >> numero;
    if (numero != (int)numero || numero <= 1){
        esPrimo = false;
        cout << "El numero ingresado no es valido, debe ser natural y mayor a 1";
    }
    else{
        for (int i = 2; (i*i) <= numero; i++){
            if ((int)numero % i == 0){
                esPrimo = false;
                break;
            }
        }
        if (esPrimo == true){
        cout << "Tu numero es primo";
        }
        else{
        cout << "Tu numero NO es primo, o sea, es compuesto";
        }
    }
    return 0;
}