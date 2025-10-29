#include <iostream>
using namespace std;
/*Dada una pila y un valor X, desarrollar un procedimiento que inserte el valor X en la última
posición de la pila y la retorne. (Definir parámetros y codificar).*/
struct Nodo{
    int info;
    Nodo *sgte;
};

void push(Nodo*&, int);
int pop(Nodo* & );
void colocarUltimo(Nodo*& Pila1, int x);

int main(){
    Nodo* Pila1 = NULL;
    push(Pila1, 345);
    push(Pila1, 445);
    push(Pila1, 45);
    push(Pila1, 5);
    push(Pila1, 3);
    push(Pila1, 37);
    int x = 50;
    colocarUltimo(Pila1, x);
    int c;
    while (Pila1 != NULL){
        c = pop(Pila1);
        cout << c << "  ";
    }
    return 0;
}

//Funcion PUSH      
void push(Nodo*&Pila, int x){
    Nodo*p = new Nodo();
    p-> info= x;
    p-> sgte= Pila;
    Pila = p;
    return;
    }
   
//Funcion POP  
int pop(Nodo* & Pila){
    int x;
    Nodo* p = Pila;
    x = p->info;
    Pila = p->sgte;
    delete p;
    return x;
}

void colocarUltimo(Nodo*& Pila1, int x){
    Nodo* pilaAuxiliar = NULL;
    while (Pila1 != NULL){
        push(pilaAuxiliar, pop(Pila1));
    }
    push(Pila1, x);
    while(pilaAuxiliar != NULL){
        push(Pila1, pop(pilaAuxiliar));
    }
}