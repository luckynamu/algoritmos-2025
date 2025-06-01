#include <iostream>
using namespace std;
//Cree un algoritmo que, según un número de 1 a 7, imprima el nombre del día correspondiente.
int main(){
    string diasDeLaSemana [7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    float numero;
    cout << "Ingresa un numero del 1 al 7 y te decimos a que dia corresponde: ";
    cin >> numero;
    while (numero < 1 || numero > 7 || numero != (int)numero){
        cout << "Numero invalido, debe ser del 1 al 7 y entero, intente nuevamente: ";
        cin >> numero;
    }
    cout << "El dia " << numero << " de la semana es el " << diasDeLaSemana[(int)numero-1];
    return 0;
}