#include <iostream>
using namespace std;
//Cree un algoritmo que sume todos los números pares comprendidos entre 1 y 100.
//variables: suma, numero, algun contador
int main(){
    int sumaDePares = 0;
    for (int numero = 0; numero <= 100; numero++ ){
        if (numero%2 == 0){
            sumaDePares+=numero;
        }
    }
    cout << "La suma de los pares entre 1 y 100 es: " << sumaDePares;
    return 0;
}