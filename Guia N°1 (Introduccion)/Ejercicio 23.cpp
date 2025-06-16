#include <iostream>
using namespace std;
/*Dado un valor M determinar e imprimir los M primeros múltiplos de 3 que no lo sean de 5,
dentro del conjunto de los números naturales*/
int main(){
    int valorM;
    cout << "Ingresa cuantos multiplos de 3 que no lo son de 5 queres imprimir: ";
    cin >> valorM;
    int cantMultiplos = 0;
    int i = 1;
    cout << "Los primeros " << valorM << " multiplos de 3 y no de 5 son: ";
    if (valorM == 0){
        cout << 0;
    }
    else{
        while (cantMultiplos < valorM){
            if (i % 3 == 0 && i % 5 != 0){
                cantMultiplos++;
                cout << i << " ";
            }
            i++;
        }
    }
    return 0;
}