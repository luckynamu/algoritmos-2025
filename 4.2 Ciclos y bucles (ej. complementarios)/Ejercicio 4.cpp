#include <iostream>
using namespace std;
/* Diseñe un programa que simule una clave secreta: el usuario tiene tres intentos para ingresar la
clave correcta.*/
int main(){
    string clave = "matuelmascapito";
    int intentosMaximos = 3;
    int intentosRealizados = 0;
    string claveIngresada;
    
    while (intentosRealizados < intentosMaximos){
        cout << "Ingrese la clave secreta: ";
        cin >> claveIngresada;
        if (claveIngresada == clave){
        cout << "Bienvenido al sistema :D";
        return 0;
        }
        intentosRealizados++;
        if (intentosRealizados < intentosMaximos){
            cout << "Error, clave incorrecta, intente nuevamente (te quedan " << intentosMaximos - intentosRealizados << " intentos)" << endl;
        }
    }
    cout << "Tu clave ingresada no coincide con la del sistema y se te acabaron los intentos :(";
    return 0;
}