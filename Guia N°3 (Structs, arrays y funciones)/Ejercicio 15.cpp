#include <iostream>
using namespace std;
/*Definir una estructura Consulta con día, paciente, especialidad. Leer un arreglo de 30
consultas y contar cuántas hay por especialidad usando funciones.*/
struct Consulta{
    int dia;
    string paciente;
    string especialidad;
};
void leerConsulta(Consulta vector[], int longitud);
void cargarEspecialidades(Consulta vector[], int longitudVectorConsulta, string vectorCargar[], int &cantEspecialidades);
int cantConsultas(Consulta vector[], int longitud, string especialidad);

int main(){
    Consulta vectorConsultas[10];
    string vectorEspecialidades[10];
    leerConsulta(vectorConsultas, 10);
    int cantidadEspecialidades;
    cargarEspecialidades(vectorConsultas, 10, vectorEspecialidades, cantidadEspecialidades);
    for (int j = 0; j < cantidadEspecialidades; j++){
        int cantidad = cantConsultas(vectorConsultas, 10, vectorEspecialidades[j]);
        cout << "--------------------------------" << endl;
        cout << "La especialidad " << vectorEspecialidades[j] << " tiene " << cantidad << " consulta(s)" << endl;
    }
    return 0;
}

void leerConsulta(Consulta vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "-----------------------" << endl;
        do{
            cout << "Ingrese el dia de la consulta: ";
            cin >> vector[i].dia;
            if (vector[i].dia < 1 || vector[i].dia > 31){
                cout << "El dia debe estar entre 1 y 31, intentelo nuevamente" << endl;
            }
        }while (vector[i].dia < 1 || vector[i].dia > 31);
        cin.ignore();
        cout << "Ingrese nombre y apellido del paciente: ";
        getline(cin, vector[i].paciente);
        cout << "Ingrese la especialidad medica de la consulta: ";
        getline(cin, vector[i].especialidad);
    }
}

void cargarEspecialidades(Consulta vector[], int longitudVectorConsulta, string vectorCargar[], int &cantEspecialidades){
    cantEspecialidades = 0;
    for (int i = 0; i < longitudVectorConsulta; i++){
        bool estaEnVector = false;
        for (int j = 0; j < cantEspecialidades; j++){
            if (vectorCargar[j] == vector[i].especialidad){
                estaEnVector = true;
                break;
            }
        }
        if (!estaEnVector){
            vectorCargar[cantEspecialidades] = vector[i].especialidad;
            cantEspecialidades++;
        }
    }
}

int cantConsultas(Consulta vector[], int longitud, string especialidad){
    int cantidadDeConsultas = 0;
    for (int i = 0; i < longitud; i++){
        if (vector[i].especialidad == especialidad){
            cantidadDeConsultas++;
        }
    }
    return cantidadDeConsultas;
}