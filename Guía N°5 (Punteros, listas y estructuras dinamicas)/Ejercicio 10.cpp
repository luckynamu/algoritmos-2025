#include <iostream>
#include <cstring>
using namespace std;
//Crea un puntero a float y realiza operaciones aritméticas indirectas.
int main(){
    float numero = 10.5;
    float *ptrNumero = &numero;
    cout << "Suma: " << *ptrNumero << " + 10 = " << *ptrNumero + 10 << endl;
    cout << "Resta: " << *ptrNumero << " - 100 = " << *ptrNumero - 100 << endl;
    cout << "Multiplicacion: " << *ptrNumero << " x 0.1 = "  << *ptrNumero * 0.1 << endl;
    cout << "Division: " << *ptrNumero << " / -10 = " << *ptrNumero / -10 << endl;
    return 0;
}