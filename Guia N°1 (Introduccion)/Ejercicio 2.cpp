#include <iostream>
using namespace std;
//ingresar dos numeros. cout la suma resta prod y coc
int main(){
    float numeroUno, numeroDos, suma, resta, producto, cociente;
    cout << "Ingrese dos numeros: ";
    cin >> numeroUno >> numeroDos;
    suma = numeroUno + numeroDos;
    resta = numeroUno - numeroDos;
    producto = numeroUno * numeroDos;
    cociente = numeroUno/numeroDos;
    cout << numeroUno << "+" << numeroDos << " = " << suma << endl;
    cout << numeroUno << "-" << numeroDos << " = " << resta << endl;
    cout << numeroUno << "x" << numeroDos << " = " << producto << endl;
    cout << numeroUno << "/" << numeroDos << " = " << cociente << endl;
    return 0;   
}
