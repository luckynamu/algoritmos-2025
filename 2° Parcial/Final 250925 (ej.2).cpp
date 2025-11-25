#include <iostream>
using namespace std;
/*Indique si el siguiente código compila en un main. Si no compila, justifique.
En caso de ser correcto, escriba la salida por pantalla.*/
int main(){
    FILE *f;
    int x;
    int v1[10] = {101, 102, 103, 104, 105, 106};
    int v2[5] = {11, 12, 13, 14, 15};
    f = fopen("C:/Users/mvpas/Documents/Universidad/Algoritmos y Estructuras de Datos/Archivos/parcial.data", "wb+");
        fwrite(v1, sizeof(int), 10, f);
        fclose(f);
    f = fopen("C:/Users/mvpas/Documents/Universidad/Algoritmos y Estructuras de Datos/Archivos/parcial.data", "rb+");
        fread(&x, sizeof(int), 1, f);
        fread(v1, sizeof(int), 4, f);
        fseek(f, (-3)*sizeof(int), SEEK_CUR);
        fwrite(v2+1, sizeof(int), 3, f);
        fclose(f);

    f = fopen("C:/Users/mvpas/Documents/Universidad/Algoritmos y Estructuras de Datos/Archivos/parcial.data", "rb");
    while ((fread(&x, sizeof(int), 1, f)) == 1){
        cout << x << endl;
    }
    fclose (f);
    return 0;
    /*La salida es:
    101
    102
    12
    13
    14
    106
    0
    0
    0
    0*/
}