#include <iostream>
using namespace std;
/*Dados dos valores enteros y positivos determinar y mostrar por el dispositivo estándar de
salida: la suma, la resta, el producto y la división de los mismos. Analice precondiciones adecuadas
y utilice leyendas adecuadas.*/
int main(){
    float numeroUno, numeroDos;
    do{
        cout << "Ingresa un numero entero positivo (hasta que no sea entero positivo no salimos de aca papito): ";
        cin >> numeroUno;
    } while (numeroUno < 0 || (int)numeroUno != numeroUno);
    do{
        cout << "Ingrese otro numero entero positivo (hasta que no sea entero positivo no salimos de aca papito): ";
        cin >> numeroDos;
    }while (numeroDos < 0 || (int)numeroDos != numeroDos);
    cout << numeroUno << " + " << numeroDos << " = " << numeroUno+numeroDos << endl;
    cout << numeroUno << " - " << numeroDos << " = " << numeroUno-numeroDos << endl;
    cout << numeroUno << " x " << numeroDos << " = " << numeroUno*numeroDos << endl;
    if (numeroDos != 0){
        cout << numeroUno << " / " << numeroDos << " = " << numeroUno/numeroDos;
    }
    else{
        cout << numeroUno << " no es divisible por 0";
    }
    return 0;
}
