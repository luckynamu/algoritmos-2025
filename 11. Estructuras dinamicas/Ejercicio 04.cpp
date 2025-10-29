#include <iostream>
using namespace std;
/*Dada una pila y dos valores X e Y, desarrollar un procedimiento que reemplace cada valor
igual a X que se encuentre en la pila por el valor Y retornando la pila modificada. En caso
de no haber ningún valor igual a X retornar la pila sin cambio. (Definir parámetros y codificar).*/
struct Nodo{
    int info;
    Nodo *sgte;
};

void push(Nodo*&, int);
int pop(Nodo* & );
void reemplazarValor(Nodo*& Pila1, int X, int reemplazo);

int main(){
    Nodo* Pila1 = NULL;
    int x;
    push(Pila1, 50);
    push(Pila1, 445);
    push(Pila1, 45);
    push(Pila1, 5);
    push(Pila1, 3);
    push(Pila1, 50);
    x = 50;
    reemplazarValor(Pila1, x, 0);
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

void reemplazarValor(Nodo*& Pila1, int X, int reemplazo){
    Nodo* pilaAuxiliar = NULL;
    while(Pila1 != NULL){
        int elemento = pop(Pila1);
        if(elemento == X){
            push(pilaAuxiliar, reemplazo);
        }
        else{
            push(pilaAuxiliar, elemento);
        }
    }
    while(pilaAuxiliar != NULL){
        push(Pila1, pop(pilaAuxiliar));
    }
}
