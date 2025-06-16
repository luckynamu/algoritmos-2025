#include <iostream>
using namespace std;
/*Dados un conjunto de valores enteros informar el promedio de los mayores que 45
y la suma de los menores que –10.*/
int main(){
    int numero;
    int divisorParaPromedio = 0;
    int sumaMenores10 = 0;
    int sumaMayores45 = 0;
    float promedioMayores45 = 0;
    do{
        cout << "Ingrese un numero entero (0 para terminar): " << endl;
        cin >> numero;
        if (numero > 45){
            sumaMayores45 += numero;
            divisorParaPromedio++;
        }
        else if (numero < -10){
            sumaMenores10 += numero;
        }
    } while (numero != 0);
    if (divisorParaPromedio > 0){
        promedioMayores45 = (float)sumaMayores45/divisorParaPromedio;
        cout << "El promedio de los numeros mayores a 45 es igual a: " << promedioMayores45 << endl;
    }
    else{
        cout << "No se ingresaron numeros mayores a 45" << endl;
    }
    cout << "La suma de los numeros menores a -10 ingresados es igual a: " << sumaMenores10 << endl;
    return 0;
}