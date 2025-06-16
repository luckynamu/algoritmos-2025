#include <iostream>
using namespace std;
//Dado una terna de valores enteros y positivos determinar si los mismos forman un triangulo.
bool formanTriangulo (float ladoA, float ladoB, float ladoC);
int main(){
    float ladoUno, ladoDos, ladoTres;
    cout << "Ingrese tres longitudes y compruebe si forman un triangulo: ";
    cin >> ladoUno >> ladoDos >> ladoTres;
    if (formanTriangulo(ladoUno, ladoDos, ladoTres)){
        cout << "Tus lados forman un triangulo.";
    }
    else{
        cout << "Tus lados no forman un triangulo.";
    }
    return 0;
}

bool formanTriangulo (float ladoA, float ladoB, float ladoC){
    return ((ladoA + ladoB) > ladoC && (ladoB + ladoC) > ladoA && (ladoA + ladoC) > ladoB);
}