#include <iostream>
using namespace std;
/*Escriba un programa que pida al usuario dos números e informe la suma, la resta,
el producto y el cociente de los mismos*/
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
