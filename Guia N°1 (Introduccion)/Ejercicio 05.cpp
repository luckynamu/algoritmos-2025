#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
/*Escriba un programa que reciba un numero que represente el radio de un circulo
e imprima el diámetro, circunferencia y área*/
int main(){
    float radioCirculo, diametroCirculo, circunferenciaCirculo, areaCirculo;
    cout << "Ingrese el radio de su circulo: ";
    cin >> radioCirculo;
    diametroCirculo = radioCirculo * 2;
    circunferenciaCirculo = 2 * radioCirculo * M_PI;
    areaCirculo = M_PI * (pow(radioCirculo, 2));
    cout << "Mi radio es: " << radioCirculo << endl;
    cout << "El diametro del circulo es: " << diametroCirculo << endl;
    cout << "La circunferencia es: " << circunferenciaCirculo << endl;
    cout << "El area del circulo es: " << areaCirculo;
    return 0;
}
