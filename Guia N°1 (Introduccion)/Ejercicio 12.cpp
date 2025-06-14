#include <iostream>
using namespace std;
/*Dada un número natural de 8 dígitos, con formato (AAAAMMDD) descompóngalo en sus
elementos lógicos y muéstrelos por el dispositivo estándar de salida.*/
int main(){
    int fecha;
    do{
        cout << "Ingrese una fecha VALIDA en formato (AAAAMMDD): ";
        cin >> fecha;
    } while (fecha < 9999999 || fecha > 99991231);
    int anio = fecha/10000;
    int mesAux = fecha % 10000;
    int mes = mesAux/100;
    int dia = fecha % 100;
    cout << "Tu anio es: " << anio << endl;
    if (mes > 12 || mes == 0){
        cout << "Tu mes es: " << mes << " (no es valido)" << endl;
    }
    else{
        cout << "Tu mes es: " << mes << endl;
    }
    if (dia > 31 || dia == 0){
        cout << "Tu dia es: " << dia << " (no es valido)";
    }
    else{
        cout << "Tu dia es: " << dia;
    }
    return 0;
}