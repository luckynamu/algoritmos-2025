#include <iostream>
using namespace std;
/*Dada una pila y dos valores X e I, desarrollar un procedimiento que inserte el valor X en la
posición I de la pila si es posible. (Definir parámetros y codificar).*/
struct Nodo{
    int info;
    Nodo *sgte;
};

void push(Nodo*&, int);
int pop(Nodo* & );
char colocarEnPosicion(Nodo*& Pila1, int x, int posicion);

int main(){
    Nodo* Pila1 = NULL;
    char exito = 'N';
    push(Pila1, 345);
    push(Pila1, 445);
    push(Pila1, 45);
    push(Pila1, 5);
    push(Pila1, 3);
    push(Pila1, 37);
    int X = 50;
    int c;
    int I;
    cout << "Ingrese la posicion en la que quiere colocar el numero: ";
    cin >> I;
    exito = colocarEnPosicion(Pila1, X, I-1);
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
char colocarEnPosicion(Nodo*& Pila1, int x, int posicion){
    Nodo* pilaAux = NULL;
    char exito = 'N';
    int i = 0;
    while(Pila1 != NULL && i < posicion){
        push(pilaAux, pop(Pila1));
        i++;
    }
    if(i == posicion){
        push(Pila1, x);
        exito = 'S';
    }
    while(pilaAux != NULL){
       push(Pila1, pop(pilaAux));
    }
   return exito;
}
