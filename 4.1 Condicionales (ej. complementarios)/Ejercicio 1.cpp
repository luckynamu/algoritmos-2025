#include <iostream>
using namespace std;
/*Implemente un programa que solicite tres números reales e indique cuál es el mayor,
cuál el menor y cuál el valor intermedio.*/
int main(){
    float numeroUno, numeroDos, numeroTres, numeroMayor, numeroMenor, numeroIntermedio;
    cout << "Ingresa tres numeros: ";
    cin >> numeroUno >> numeroDos >> numeroTres;
    if (numeroUno >= numeroDos && numeroUno >= numeroTres){
        numeroMayor = numeroUno;
    }
        else if (numeroDos >= numeroUno && numeroDos >= numeroTres){
            numeroMayor = numeroDos;
        }
        else{
            numeroMayor = numeroTres;
        }
    if (numeroUno <= numeroDos && numeroUno <= numeroTres){
        numeroMenor = numeroUno;
    }
        else if (numeroDos <= numeroUno && numeroDos <= numeroTres){
            numeroMenor = numeroDos;
        }
        else{
            numeroMenor = numeroTres;
        }
    if (numeroUno != numeroMayor && numeroUno != numeroMenor){
        numeroIntermedio = numeroUno;
    }
        else if (numeroDos != numeroMayor && numeroDos != numeroMenor){
            numeroIntermedio = numeroDos;
        }
        else{
            numeroIntermedio = numeroTres;
        }
    cout << "El numero mayor es: " << numeroMayor << endl;
    cout << "El menor es: " << numeroMenor << endl;
    cout << "El intermedio es: " << numeroIntermedio << endl;
    return 0;
}



