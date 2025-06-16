#include <iostream>
using namespace std;
/*Dados dos números naturales M y N, determinar e imprimir cuantos múltiplos de M hay en
el conjunto 1 a N.*/
int main(){
    int numeroM, numeroN;
    cout << "Ingrese el numero del que quiera determinar sus multiplos: ";
    cin >> numeroM;
    cout << "Ingrese hasta que numero quiere que llegue el conjunto en el que se buscaran los multiplos de " << numeroM << " : ";
    cin >> numeroN;
    int cantidadDeMultiplos = 0;
    for (int i = 1; i <= numeroN; i++){
        if (i % numeroM == 0){
            cout << i << " es multiplo de " << numeroM << endl;
            cantidadDeMultiplos++;
        }
    }
    cout << numeroM << " tiene en total: " << cantidadDeMultiplos << " multiplo(s) entre 1 y " << numeroN;
    return 0;
}
