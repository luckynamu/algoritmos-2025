#include <iostream>
using namespace std;
/*Dado un conjunto de valores reales, que finaliza con un valor nulo, determinar e imprimir
(si hubieron valores): el máximo de los negativos y el minimo de los positivos*/
int main(){
    float numero;
    float maxNegativo = 0;
    float minPositivo = 0;
    bool hayNegativo = false;
    bool hayPositivo = false;
    cout << "Ingrese un numero real (0 para finalizar): ";
    cin >> numero;
    while (numero != 0){
        if (numero > 0){
            if (!hayPositivo || numero < minPositivo){
                minPositivo = numero;
                hayPositivo = true;
            }
        }
        if (numero < 0){
            if (!hayNegativo || numero > maxNegativo){
                maxNegativo = numero;
                hayNegativo = true;
            }
        }
        cout << "Ingrese otro numero real (0 para terminar): ";
        cin >> numero;
    }
    if (hayNegativo){
        cout << "El maximo de los negativos ingresados es: " << maxNegativo << endl;
    }
    else{
        cout << "No se ingresaron numeros negativos." << endl;
    }
    if (hayPositivo){
        cout << "El minimo de los positivos ingresados es: " << minPositivo << endl;
    }
    else{
        cout << "No se ingresaron numeros positivos." << endl;
    }
    return 0;
}