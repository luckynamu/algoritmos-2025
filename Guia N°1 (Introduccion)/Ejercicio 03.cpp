#include <iostream>
using namespace std;
//Imprima un programa que imprima los números del 1 al 4 en una misma línea, hágalo de las formas siguientes:
int main(){
    //Utilizando un solo operador de inserción de flujo
    cout << "1 2 3 4 5 6 7 8 9 10 11 12 13 14 \n";
    //Una única sentencia con 4 operadores de inserción de flujo
    cout << "1 2 3 4 5" << " 6 7 8 9" << " 10 11 12 13 14" << endl;
    //Utilizando cuatro sentencias
    cout << "1 2 3 4";
    cout << " 5 6 7 8";
    cout << " 9 10 11 12";
    cout << " 13 14" << endl;
    return 0;
}
