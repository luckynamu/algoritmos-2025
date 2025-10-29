#include <iostream>
using namespace std;
/*Dada una pila y un valor X colocar el valor x en la tercera posicion de la pila,
retornando un parámetro con valor 'S' o 'N' según haya sido exitoso o no el requerimiento. (Definirparámetros y codificar).*/
struct Nodo{
    int info;
    Nodo *sgte;
};    

void push(Nodo*&, int);
int pop(Nodo* & );
char colocarTercerPosicion(Nodo*& Pila1, int x);

int main(){
    Nodo* Pila1 = NULL;
    char exito = 'N';
    push(Pila1, 345);
    push(Pila1, 445);
    push(Pila1, 45);
    push(Pila1, 5);
    push(Pila1, 3);
    push(Pila1, 37);
    int x = 50;
    int c;
    exito = colocarTercerPosicion(Pila1, x);
    cout << exito << endl;
    while(Pila1 != NULL){
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

char colocarTercerPosicion(Nodo*& Pila1, int x){
    Nodo* pilaAux = NULL;
    char exito = 'N';
    int i = 0;
    while(Pila1 != NULL && i < 2){
        push(pilaAux, pop(Pila1));
        i++;
    }
    if(i == 2){
        push(Pila1, x);
        exito = 'S';
    }
    while(pilaAux != NULL){
       push(Pila1, pop(pilaAux));
    }
   return exito;
}
