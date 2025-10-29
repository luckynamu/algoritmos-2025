#include <iostream>
using namespace std;
struct Nodo {
    int info;
    Nodo *sgte;
    };              
void push(Nodo*&, int);
int pop(Nodo* & );
int main(){
    Nodo* Pila1=NULL;
    Nodo* Pila2=NULL;
    int x;
    push(Pila1,345);
    push(Pila1,445);
    push(Pila1,45);
    push(Pila1,5);
    push(Pila1,3);
    push(Pila1,37);
    while(Pila1!=NULL){
        x=pop(Pila1);
        cout<<x<<"  ";
        push(Pila2,x);
    }
    cout <<endl;
    while(Pila2!=NULL){
       cout<<pop(Pila2)<< "  ";
    }
    return 0;
}


// funcion push        
void push(Nodo*&Pila, int x){
    Nodo*p = new Nodo();
    p-> info= x;
    p-> sgte= Pila;
    Pila = p;
    return;
    }
   
// funcion pop  
int pop(Nodo* & Pila){
    int x;
    Nodo* p = Pila;
    x = p->info;
    Pila = p->sgte;
    delete p;
    return x;
}
   
