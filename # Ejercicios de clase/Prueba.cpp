#include <iostream>
#include <cstring>
using namespace std;

struct Venta {
    char fecha[11];         // "YYYY-MM-DD" + '\0'
    //                          0123 posiciones anio 56 las del mes
    char codigo[8];         // Ej: "ART001" + '\0'
    char descripcion[30];   // Nombre del producto
    char local[6];          // Ej: "LOC01" + '\0'
    float precio;
    int cantidad;
};

struct VentaImportes{
    char localcito[6];
    float importe;
};

/*void localesCuenta(VentaImportes vector[], char local[], float importe, int&cantLocales);
void bubbleSort(Venta array[], int longitud);
bool fechaCoincide(Venta ventitas, char fechaIngresada[]);
bool periodoCoincide(Venta ventazas, char fechaUno[], char fechaDos[]);*/

int main() {
    Venta ventas;
    //VentaImportes vectorVentas[20]; //20 para que no se rompa
    //int cantLocales = 0;

    FILE* archivo = fopen("C:/Users/mvpas/Documents/Universidad/Algoritmos y Estructuras de Datos/Archivos/ventas.bin", "rb");
    if (!archivo) {
        cout << "No se pudo abrir el archivo ventas.bin\n";
        return 1;
    }
    //int i = 0;
    while (fread(&ventas, sizeof(Venta), 1, archivo) == 1) {
            cout << "Fecha: " << ventas.fecha << " ";
            cout << "Codigo: " << ventas.codigo << "\t";
            cout << "Precio: " << ventas.precio << "\t";
            cout << "Cantidad: " << ventas.cantidad << "\t";
            cout << "Descripcion: " << ventas.descripcion << "\t";
            cout << "Local: " << ventas.local << "\n";
    }
    //i++; 
    fclose(archivo);
    return 0;
}