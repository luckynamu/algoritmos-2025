#include <iostream>
using namespace std;
/*Crear una estructura Alumno con nombre, promedio y fecha de nacimiento. Luego crear una función
“aprobo” que reciba un Alumno y retorne true si su promedio es mayor a 6.*/
struct Fecha{
    int dia;
    int mes;
    int anio;
};
struct Alumno{
    string nombre;
    float promedio;
    Fecha nacimiento;
};
void cargarAlumno(Alumno &alumnito);
bool aprobado(Alumno alumnillo);
int main(){
    Alumno victoria;
    Alumno facundo;
    cargarAlumno(victoria);
    cin.ignore();
    cargarAlumno(facundo);
    if (aprobado(victoria)){
        cout << victoria.nombre << " esta aprobado/a";
    }
    else{
        cout << victoria.nombre << " esta desaprobado/a porque tiene promedio " << victoria.promedio;
    }
}

void cargarAlumno(Alumno &alumnito){
    cout << "Ingresa el nombre: ";
    getline(cin, alumnito.nombre);
    cout << "Ingresa el promedio: ";
    cin >> alumnito.promedio;
    cout << "Ingresa la fecha de nacimiento: " << endl;
    cout << "Dia: ";
    cin >> alumnito.nacimiento.dia;
    cout << "Mes: ";
    cin >> alumnito.nacimiento.mes;
    cout << "Anio: ";
    cin >> alumnito.nacimiento.anio;
}
bool aprobado(Alumno alumnillo){
        bool estaAprobado = false;
        if (alumnillo.promedio >= 6){
            estaAprobado = true;
        }
        return estaAprobado;
}