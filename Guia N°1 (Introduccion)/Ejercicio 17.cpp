#include <iostream>
using namespace std;
/*Dado un par de valores que representa el mes y año de una fecha valida del siglo XXI
determinar e imprimir la cantidad de días de ese mes*/
bool esBisiesto(int anio);
int main(){
    int anio, mes;
    int diasPorMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    do{
        cout << "Ingrese un anio valido del siglo XXI: ";
        cin >> anio;
    } while (anio < 2001 || anio > 2100);
    do {
        cout << "Ingrese el numero de un mes valido: ";
        cin >> mes;
    } while (mes <= 0 || mes > 12);
    int dias = diasPorMes[mes - 1];
    if (mes == 2 && esBisiesto(anio)){
        cout << "El mes " << mes << " del anio " << anio << " tiene 29 dias ya que es bisiesto.";
    }
    else{
        cout << "El mes " << mes << "del anio " << anio << " tiene " << dias << " dias";
    }
    return 0;
}

bool esBisiesto(int anio){
    bool esAnioBisiesto = false;
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){
        esAnioBisiesto = true;
    }
    else{
        esAnioBisiesto = false;
    }
    return esAnioBisiesto;
}
