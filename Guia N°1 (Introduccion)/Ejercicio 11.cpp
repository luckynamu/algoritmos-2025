#include <iostream>
using namespace std;
/*Dada una terna de números naturales <dia, mes, año> que representan al día, al mes y al
año de una fecha informarla como un solo número natural de 8 dígitos (AAAAMMDD). Establezca precondiciones.*/
int main(){
    int dia, mes, anio;
    do{
        cout << "Ingrese un dia valido: ";
        cin >> dia;
    } while( dia < 0 || dia > 31);
    do{
        cout << "Ingrese un mes valido: ";
        cin >> mes;
    } while (mes < 0 || mes > 12);
    do{
        cout << "Ingrese un anio valido: ";
        cin >> anio;
    } while (anio < 0 || anio > 9999);
    anio *= 10000;
    mes *= 100;
    int fecha = anio + mes + dia;
    cout << "La fecha ingresada (AAAAMMDD) es: " << fecha;
    return 0;
}