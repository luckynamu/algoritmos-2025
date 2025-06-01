#include <iostream>
using namespace std;
/* Elabore un programa que imprima un patrón de caracteres en forma de 
pirámide invertida, de altura N.*/
int main(){
    int alturaN;
    cout << "Ingrese la altura de su piramide invertida: ";
    cin >> alturaN;
    for (int fila = 0; fila < alturaN; fila++){
        for (int espacio = 0; espacio < fila; espacio++){
            cout << " ";
        }
        for (int asterisco = 0; asterisco < 2 * (alturaN - fila) - 1; asterisco++){
            cout << "*";
        }
        cout << endl;
    }
return 0;
}