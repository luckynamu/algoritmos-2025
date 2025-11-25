#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo *sgte;
};
void insertarAlFinal(Nodo *&lista, int x);
void insertarNodoEnPosicion(Nodo*& lista, int posicion, int valor);
void mostrarLista(Nodo *Lista);

int main(){
   Nodo* lista = NULL;
   insertarAlFinal(lista, 1);
   insertarAlFinal(lista, 2);
   insertarAlFinal(lista, 3);
   mostrarLista(lista);
   cout << "---------------------------------" << endl;
   insertarNodoEnPosicion(lista, 2, 10);
   mostrarLista(lista);
   return 0;
}

//Insertar el primer nodo de una lista o delante del primero.
void insertarPrimero(Nodo *&lista, int x){
   Nodo *p = new Nodo();
   p->info = x;
   p->sgte = lista;
   //Muevo mi puntero al elemento que inserte.
   lista = p;
}

//Insertar después del ultimo elemento.
void insertarAlFinal(Nodo *&lista, int x){
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

//Insertar nodo en una posicion n.
void insertarNodoEnPosicion(Nodo*& lista, int posicion, int valor){
   Nodo* p = new Nodo();
   p -> info = valor;
   if (posicion == 1){
      p->sgte = lista;
      lista = p;
      return;
   }

   Nodo* anterior = lista;
   int i = 1;
   while(anterior != NULL && i < posicion - 1){
      anterior = anterior->sgte;
      i++; 
   }

   if(anterior == NULL){
      delete(p);
      return;
   }
   p -> sgte = anterior->sgte;
   anterior -> sgte = p;   
}

//Inserta nodos de menor a mayor, orden creciente.
void insertarOrdenado(Nodo*&lista, int valor){
   Nodo* nuevo = new Nodo();
   nuevo -> info = valor;
   nuevo -> sgte = NULL;
   Nodo* auxiliar = lista;
   Nodo* anterior = NULL;
   while(auxiliar != NULL && auxiliar -> info < valor){
      anterior = auxiliar;
      auxiliar = auxiliar -> sgte;
   }
   if (anterior == NULL){
      lista = nuevo;
   }
   else{
      anterior -> sgte = nuevo;
   }
   nuevo -> sgte = auxiliar;
}

//Mostrar todos los valores de la lista sin eliminar el mostrado.
void mostrarLista(Nodo *Lista){
   Nodo *aux = Lista;
   while(aux != NULL){
      cout << aux->info << endl;
      aux = aux->sgte;
   }
}

//Mostrar todos los valores de la lista y elimina el mostrado.
void mostrarListaEliminar(Nodo *&lista){
   Nodo *aux;
   while(lista != NULL){
      aux = lista;
      cout << aux->info << endl;
      lista = lista->sgte;
      delete(aux);
   }
}

//Borra los nodos y deja la lista en NULL.
void liberarMemoria(Nodo *&Lista){
   Nodo *aux;
   while(Lista != NULL){
      aux = Lista;
      Lista = Lista->sgte;
      delete(aux);
    }
}

//Borrar un elemento especifico de una lista.
void borrarNodo(Nodo *&lista, int x){
   Nodo *actual = lista;
   Nodo *anterior = NULL;
   while(actual != NULL && actual->info != x){
      anterior = actual;
      actual = actual->sgte;
   }
   if (actual == NULL){
        return; 
   }
   if (anterior == NULL){
      lista = actual->sgte; 
   }
   else{
      anterior->sgte = actual->sgte;
   }
   delete actual;
}

//Borrar un elemento de posición n en la lista.
void eliminarElementoEnPosicion(Nodo*& lista, int posicion){
   if (lista == NULL || posicion < 1){
      return;
   }
   Nodo* actual = lista;
   Nodo* anterior = NULL;
   int i = 1;
   while(actual != NULL && i < posicion){
      anterior = actual;
      actual = actual -> sgte;
      i++;
   }
   if(actual == NULL){
      return;
   }
   if(anterior == NULL){
      lista = actual->sgte;
   }
   else{
      anterior -> sgte = actual -> sgte;
   }
   delete(actual);
}

//Devuelve el nodo en la posicion n sin eliminarlo.
int popElementoEnPosicion(Nodo*& lista, int posicion){
   Nodo* auxiliar = lista;
   int x;
   int i = 1;
   while(auxiliar != NULL && i < posicion){
      auxiliar = auxiliar->sgte;
      i++;
   }
   if(auxiliar == NULL){
      return -1;
   }
   else{
      x = auxiliar-> info;
      return x;
   }
}