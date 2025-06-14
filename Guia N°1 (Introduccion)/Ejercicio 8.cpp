#include <iostream>
#include <cmath>
using namespace std;
/*Escriba un programa que reciba un numero entero de 5 digitos, que separe el numero en
sus digitos y los muestre por pantalla, uno por línea comenzando por el
mas significacivo en la primera línea.*/
int main(){
    int numero;
    int digitos[5];
    do{
        cout << "Ingrese un numero de 5 digitos: ";
        cin >> numero;
    } while (abs(numero) > 99999 || abs(numero) < 10000);
    for (int i = 0; i < 5; i++){
        digitos[i] = numero % 10;
        numero /= 10;
    }
    for (int i = 4; i >= 0; i--){
        cout << digitos[i] << endl;
    }
    return 0;
}