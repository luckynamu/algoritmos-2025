#include <iostream>
using namespace std;
/*Dado un conjunto de N valores informar el mayor, el menor y en qué
posición del conjunto fueron ingresados.*/
int main(){
    float numero, mayor, menor;
    cout << "Ingrese un numero (0 para terminar): ";
    cin >> numero;
    mayor = numero;
    menor = numero;
    int posicionMayor = 1;
    int posicionMenor = 1;
    int i = 1;
    if (numero == 0){
        cout << "El programa ha sido finalizado.";
        return 1;
    }
    else{
        while (numero != 0){
            cout << "Ingrese un numero (0 para terminar): ";
            cin >> numero;
            i++;
            if (numero >= mayor && numero != 0){
                mayor = numero;
                posicionMayor = i;
            }
            if (numero <= menor && numero != 0){
            menor = numero;
            posicionMenor = i;
            }
        }
    }
    cout << "El mayor del conjunto es el " << mayor << " en la posicion " << posicionMayor << endl;
    cout << "El menor del conjunto es el " << menor << " en la posicion " << posicionMenor << endl;
    return 0;
}