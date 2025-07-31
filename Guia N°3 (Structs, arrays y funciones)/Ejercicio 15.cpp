#include <iostream>
using namespace std;
/*Definir una estructura Consulta con día, paciente, especialidad. Leer un arreglo de 30
consultas y contar cuántas hay por especialidad usando funciones.*/
struct Consulta{
    int dia;
    string paciente;
    string especialidad;
};
void leerConsultas (Consulta vector[], int dimVector){
    for (int i = 0; i < dimVector; i++){
        cout << "Ingresa el dia de la consulta : " << endl;
        cin >> vector[i].dia;
        cout << "Ingresa el nombre del paciente: " << endl;
        cin >> vector[i].paciente;
        cout << "Ingresa la especialidad: " << endl;
        cin >> vector[i].especialidad;
    }
}

struct Especialidad{
    string nombreDeEspecialidad;
    int cantidad;
};

void cantidadDeConsultasPorEspecialidad (Consulta vecConsulta[], int dimVecConsulta, Especialidad vecEspecialidad[30]){
    int dimEspecialidad = 0;
    for (int i = 0; i < dimVecConsulta; i++){
        for (int j = 0; j < dimEspecialidad; j++){
            if (vecConsulta[i].especialidad != vecEspecialidad[j].nombreDeEspecialidad){

            }
        }
    }



}

int main(){

}