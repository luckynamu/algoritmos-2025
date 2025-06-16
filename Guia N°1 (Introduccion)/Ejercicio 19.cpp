#include <iostream>
using namespace std;
/*Dado una terna de valores que representan los lados de un triangulo determinar 
el tipo de triangulo que forman.*/
bool formanTriangulo (float ladoA, float ladoB, float ladoC);
int main(){
    float ladoUno, ladoDos, ladoTres;
    cout << "Ingrese tres longitudes para conocer el tipo de triangulo que forman: ";
    cin >> ladoUno >> ladoDos >> ladoTres;
    if (formanTriangulo(ladoUno, ladoDos, ladoTres)){
        if (ladoUno == ladoDos && ladoDos == ladoTres){
            cout << "Tu triangulo es equilatero";
        }
        else if ((ladoUno == ladoDos && ladoDos != ladoTres) ||
        (ladoDos == ladoTres && ladoTres != ladoUno) ||
        (ladoTres == ladoUno && ladoUno != ladoDos)){
            cout << "Tu triangulo es isosceles";
        }
        else{
            cout << "Tu triangulo es escaleno";
        }
    }
    else{
        cout << "Tus lados no forman un triangulo";
    }
    return 0;
}

bool formanTriangulo (float ladoA, float ladoB, float ladoC){
    return ((ladoA + ladoB) > ladoC && (ladoB + ladoC) > ladoA && (ladoA + ladoC) > ladoB);
}