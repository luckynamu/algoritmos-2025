#include <iostream>
using namespace std;
/*Desarrolle un programa que solicite la carga de seis notas, las almacene en un array
y calcule el promedio general.*/
int main(){
    float notas[6];
    float sumaDeNotas = 0;
    float promedioGeneral = 0;
    for (int i= 0; i < 6; i++){
        cout << "Ingrese una nota: ";
        cin >> notas[i];
        sumaDeNotas+= notas[i];
    }
    promedioGeneral = sumaDeNotas/6;
    cout << "El promedio general de estas notas es de: " << promedioGeneral;
    return 0;
}