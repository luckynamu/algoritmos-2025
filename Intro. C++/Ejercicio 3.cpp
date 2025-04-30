#include <iostream>
using namespace std;
//Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media
int main(){
    int primerAlumno, segundoAlumno, tercerAlumno, cuartoAlumno, notaFinalMedia;
    cout << "Ingrese las notas de los cuatro alumnos:" << endl;
    cin >> primerAlumno >> segundoAlumno >> tercerAlumno >> cuartoAlumno;
    notaFinalMedia = (primerAlumno + segundoAlumno + tercerAlumno + cuartoAlumno)/4;
    cout << "La nota final media de los 4 alumnos es: " << notaFinalMedia << endl;
    return 0;
}