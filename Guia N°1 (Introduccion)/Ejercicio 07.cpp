#include <iostream>
using namespace std;
/*Utilizando solo lo que hemos desarrollado en esta introduccion escriba un programa que
calcule los cuadrados y los cubos de los números de 0 a 10 y los muestre por pantalla.*/
int main(){
    for (int i = 0; i <= 10; i++){
        cout << i << "^2 = " << i*i << endl;
        cout << i << "^3 = " << i*i*i << endl;
    }
    return 0;
}
