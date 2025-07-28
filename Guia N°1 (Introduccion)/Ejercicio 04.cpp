#include <iostream>
using namespace std;
/*Escriba un programa que reciba tres números por el teclado e imprima la suma, el promedio,
el producto, el mayor y el menor de esos números. Escriba un adecuado dialogo en pantalla.*/
int main(){
    float numeroUno, numeroDos, numeroTres;
    cout << "Ingrese tres numeros: ";
    cin >> numeroUno >> numeroDos >> numeroTres;
    float suma = numeroUno + numeroDos + numeroTres;
    float promedio = suma/3;
    float producto = numeroUno * numeroDos * numeroTres;
    float numeroMayor = numeroUno;
    float numeroMenor = numeroUno;
    if (numeroDos >= numeroUno && numeroDos >= numeroTres){
        numeroMayor = numeroDos;
    }
    else if (numeroTres >= numeroUno && numeroTres >= numeroDos){
        numeroMayor = numeroTres;
    }
    if (numeroDos <= numeroUno && numeroDos <= numeroTres){
        numeroMenor = numeroDos;
    }
    else if (numeroTres <= numeroUno && numeroTres <= numeroDos){
        numeroMenor = numeroTres;
    }
    cout << "La suma de los numeros es: " << suma << endl;
    cout << "El promedio de los numeros es: " << promedio << endl;
    cout << "El producto de los numeros es: " << producto << endl;
    cout << "El mayor es: " << numeroMayor << endl;
    cout << "El menor es: " << numeroMenor;
    return 0;
}
