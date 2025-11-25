#include <iostream>
using namespace std;
/*Escriba un procedimiento que reciba dos parámetros. Una lista de numeros
enteros (puede estar vacia o no), una cadena que sera la ruta y nombre de un archivo.
El subprograma, debe insertar al final de la lista todos los numeros n del archivo que sean impares y tal que 1000 <= n <= 2000.
Declare todos los tipos de datos necesarios.*/
void insertarAlFinal(Nodo *&lista, int x);
void insertarNumerosAlFinal(Nodo*& lista, char rutaArchivo[50]);

struct Nodo{
    int info;
    Nodo *sgte;
};

int main(){
//Tengo una lista, puede ser vacía o no:
Nodo* lista;
//La ruta de acceso de mi archivo:
char nombreArchivo[50];
insertarNumerosAlFinal(lista, nombreArchivo);
return 0;
}

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

void insertarNumerosAlFinal(Nodo*& lista, char rutaArchivo[50]){
    int n;
    FILE* archivo = fopen(rutaArchivo, "rb");
    if (!archivo){
        cout << "No se pudo abrir el archivo\n";
        return;
    }

    while(fread(&n, sizeof(int), 1, archivo) == 1){
        if(n % 2 != 0 && n >= 1000 && n <= 2000){
            insertarAlFinal(lista, n);
        }
    }
    fclose(archivo);
}