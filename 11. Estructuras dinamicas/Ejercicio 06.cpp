#include <iostream>
using namespace std;
/*Desarrollar un procedimiento que ingrese por teclado un conjunto de Apellidos y Nombre
de alumnos y los imprima en orden inverso al de ingreso. (Definir parámetros y codificar).*/
struct Persona{
    char apellido[50];
    char nombre[50];
};
struct Nodo{
    Persona info;
    Nodo *sgte;
};

void push(Nodo*&Pila, Persona x);
Persona pop(Nodo* & Pila);

int main(){
    Nodo* Pila = NULL;
    char confirmacion;
    do{
        Persona persona;
        cout << "Nombre: " << endl;
        cin.getline(persona.nombre, 50);
        cout << "Apellido: " << endl;
        cin.getline(persona.apellido, 50);
        push(Pila, persona);
        cout << "Continuar? (S/N): " << endl;
        cin >> confirmacion;
        cin.ignore();
    }while(confirmacion == 'S' || confirmacion == 's');

    Persona auxiliar;

    while(Pila != NULL){
        auxiliar = pop(Pila);
        cout << auxiliar.nombre << ", " << auxiliar.apellido << endl;
    }
    return 0;
}

//Funcion PUSH      
void push(Nodo*&Pila, Persona x){
    Nodo*p = new Nodo();
    p-> info = x;
    p-> sgte = Pila;
    Pila = p;
    return;
}

//Funcion POP  
Persona pop(Nodo* & Pila){
    Persona x;
    Nodo* p = Pila;
    x = p->info;
    Pila = p->sgte;
    delete p;
    return x;
}
