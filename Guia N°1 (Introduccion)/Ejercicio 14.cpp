#include <iostream>
#include <sstream>
using namespace std;
/*Dado una terna de valores determine e imprima: El mayor y el menor del conjunto.
Muestre por salida estándar con las aclaraciones que considere.*/
int main(){
    float numero;
    float numeroMayor, numeroMenor;
    string loteDeNumeros;
    cout << "Ingresa los numeritos que quieras (0 para terminar): ";
    cin >> numero;
    if (numero == 0){
        cout << "No se ingresaron numeros validos";
        return 1;
    }
    numeroMayor = numero;
    numeroMenor = numero; 
    ostringstream oss;
    oss << numero;
    loteDeNumeros += oss.str() + " ";
    do{
        cout << "Ingresa los numeritos que quieras (0 para terminar): ";
        cin >> numero;
        if (numero == 0){
            break;
        }
        oss.str("");
        oss.clear();
        oss << numero;
        loteDeNumeros += oss.str() + " ";
        if (numero > numeroMayor){
            numeroMayor = numero;
        }
        if (numero < numeroMenor){
            numeroMenor = numero;
        }
    } while (numero != 0);
    cout << "Del siguiente lote de valores: " << endl << loteDeNumeros << endl;
    cout << "El numero mayor es " << numeroMayor << " y el numero menor es " << numeroMenor;
    return 0;
}