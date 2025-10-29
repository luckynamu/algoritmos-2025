#include <iostream>
using namespace std;
/*Dada una pila desarrollar un procedimiento que ordene la misma de acuerdo al valor de
sus nodos y la retorne. Solo se deben usar pilas. (Definir parámetros y codificar).*/
struct Nodo{
    int info;
    Nodo *sgte;
};
void push(Nodo*&, int);
int pop(Nodo* & );

int main(){
    Nodo* Pila1 = NULL;
    push(Pila1,100);
    push(Pila1,445);
    push(Pila1,45);
    push(Pila1,5);
    push(Pila1,3);
    push(Pila1,50);
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
    p-> info = x;
    p-> sgte = Pila;
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

//Menor a mayor (el menor quedara en el tope de la pila original).
void ordenarPila(Nodo*& Pila) {
    Nodo* pilaAuxiliar = NULL;
    //Este bucle se ejecuta mientras la pila original tenga elementos.
    while (Pila != NULL) {
        //Saca el elemento del tope de la pila original. Este es el elemento que vamos a posicionar.
        int elementoActual = pop(Pila);
        //Este bucle revisa los elementos que ya están en la pila auxiliar.
        //Mueve de regreso a la pila original cualquier elemento que sea MÁS GRANDE que 'elementoActual'.
        while (pilaAuxiliar != NULL) {
            //Saca el elemento del tope de la pila auxiliar para poder compararlo.
            int topeAuxiliar = pop(pilaAuxiliar);
            if (topeAuxiliar > elementoActual) {
                /*Si el elemento de la pila auxiliar es mayor, significa que 'elementoActual'
                debe ir debajo de él. Por eso, devolvemos 'topeAuxiliar' a la pila original
                para reubicarlo más tarde.*/
                push(Pila, topeAuxiliar);
            } else {
                /*Si el elemento de la pila auxiliar es menor o igual, hemos encontrado
                la posición correcta. Devolvemos el 'topeAuxiliar' a su lugar...*/
                push(pilaAuxiliar, topeAuxiliar);
                // ...y rompemos el bucle, porque ya no necesitamos seguir buscando.
                break;
            }
        }
        /*Inserta 'elementoActual' en la pila auxiliar. Ahora está en su posición ordenada
        con respecto a los otros elementos de la pila auxiliar.*/
        push(pilaAuxiliar, elementoActual);
    }

    while (pilaAuxiliar != NULL) {
        push(Pila, pop(pilaAuxiliar));
    }
}
