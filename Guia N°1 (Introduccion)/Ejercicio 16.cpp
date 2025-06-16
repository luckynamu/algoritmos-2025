#include <iostream>
using namespace std;
/*Dadas dos ternas de valores que representan las fechas validas de nacimiento de dos
personas, indique cual de las dos corresponde al mayor.*/
int main(){
    int fechaNacimientoUno[3];
    int fechaNacimientoDos[3];
    cout << "Ingresa el dia de nacimiento: ";
    cin >> fechaNacimientoUno[0];
    cout << "Ingresa mes de nacimiento: ";
    cin >> fechaNacimientoUno[1];
    cout << "Ingresa anio de nacimiento: ";
    cin >> fechaNacimientoUno[2];
    cout << "Vamos con la segunda fecha :)" << endl;
    cout << "Ingresa el dia de nacimiento: ";
    cin >> fechaNacimientoDos[0];
    cout << "Ingresa mes de nacimiento: ";
    cin >> fechaNacimientoDos[1];
    cout << "Ingresa anio de nacimiento: ";
    cin >> fechaNacimientoDos[2];
    bool unoEsMayor = false;
    if (fechaNacimientoUno[2] < fechaNacimientoDos[2]){
        unoEsMayor = true;
    }
    else if (fechaNacimientoUno[2] == fechaNacimientoDos[2]){
        if (fechaNacimientoUno[1] < fechaNacimientoDos[1]){
            unoEsMayor = true;
        }
        else if (fechaNacimientoUno[1] == fechaNacimientoDos[1]){
            if (fechaNacimientoUno[0] < fechaNacimientoDos[0]){
                unoEsMayor = true;
            }
        }
    }
    if (unoEsMayor){
        cout << "La persona mayor es la que nacio el " << fechaNacimientoUno[0] << "/";
        cout << fechaNacimientoUno[1] << "/" << fechaNacimientoUno[2];
    }
    else{
        cout << "La persona mayor es la que nacio el " << fechaNacimientoDos[0] << "/";
        cout << fechaNacimientoDos[1] << "/" << fechaNacimientoDos[2];  
    }
    return 0;
}