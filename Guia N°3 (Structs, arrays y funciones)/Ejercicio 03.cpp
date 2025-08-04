#include <iostream>
using namespace std;
/*Definir una estructura Empleado con nombre, edad y sueldo. Leer los datos de 6
empleados y mostrar el sueldo promedio mediante una función.*/
struct Empleado{
    string nombre;
    int edad;
    float sueldo;
};
void leerEmpleados(Empleado vector[], int longitud);
float promedioDeSueldo(Empleado vector[], int longitud);

int main(){
    Empleado vectorEmpleados[6];
    leerEmpleados(vectorEmpleados, 6);
    float sueldoPromedio = promedioDeSueldo(vectorEmpleados, 6);
    cout << "El sueldo promedio entre los empleados es de $" << sueldoPromedio;
    return 0;
}

void leerEmpleados(Empleado vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "-------------------------------" << endl;
        if (i > 0){
            cin.ignore();
        }
        cout << "Ingrese el nombre del empleado: ";
        getline(cin, vector[i].nombre);
        cout << "Ingrese la edad del empleado: ";
        cin >> vector[i].edad;
        cout << "Ingrese el sueldo del empleado: ";
        cin >> vector[i].sueldo;
    }
}

float promedioDeSueldo(Empleado vector[], int longitud){
    float sumaSueldos = 0;
    float promedioSueldo = 0;
    for (int i = 0; i < longitud; i++){
        sumaSueldos += vector[i].sueldo;
    }
    promedioSueldo = sumaSueldos/(float)longitud;
    return promedioSueldo;
}