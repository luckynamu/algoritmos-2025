#include <iostream>
#include <cmath>
using namespace std;
/*Dado un valor entero determinar y mostrar: la quinta parte del mismo, el resto de la
división por 5 y la tercera parte del valor del primer punto. */
int main(){
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    float quintaParte = numero/5.0;
    float restoDivisionCinco = numero % 5;
    float terceraPartePrimerPunto = (pow(numero,3) + 7)/3;
    cout << "La quinta parte de " << numero << " es: " << quintaParte << endl;
    cout << "El resto de la division por 5 es: " << restoDivisionCinco << endl;
    cout << "La tercera parte de " << numero << "^3 + 7 es: " << terceraPartePrimerPunto; 
    return 0;
}