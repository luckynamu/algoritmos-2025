#include <iostream>
using namespace std;
/*Dado un archivo de registros de alumnos, donde cada registro contiene:
a) Apellido y Nombre del alumno (35 caracteres) b) Número de legajo (7 dígitos)
c) División asignada (1 a 100), ordenado por número de legajo.
Desarrollar el algoritmo y codificación del programa que imprima el listado de alumnos por división,
ordenado por división y número de legajo crecientes, a razón de 55 alumnos por hoja.*/

struct Alumno{
    char apellidoNombre[35];
    int legajo;
    int division;
};
struct Nodo{
    Alumno info;
    Nodo* sgte;
};

void insertarAlFinal(Nodo *&lista, Alumno x);

int main(){
    FILE* archivo = fopen("registrosAlumnos", "rb");
    //Vector de punteros, o sea, vector de listas. Cada elemento del vector es una lista a la que le corresponde una division.
    Nodo* divisiones[100] = {NULL};
    //Cada nro. de posicion corresponde a una division. Pos 0 = 1, etc.
    Alumno alumno;
    while(fread(&alumno, sizeof(Alumno), 1, archivo) == 1){
        insertarAlFinal(divisiones[alumno.division - 1], alumno);
    }
}

void insertarAlFinal(Nodo *&lista, Alumno x){
   Nodo* p = new Nodo();
   p->info = x;
   p->sgte = NULL;
   if(lista == NULL){
      lista = p;
   }
   else{
      Nodo* aux = lista;
      while(aux->sgte != NULL){
         aux = aux->sgte;
      }
      aux->sgte = p;
   }
}
