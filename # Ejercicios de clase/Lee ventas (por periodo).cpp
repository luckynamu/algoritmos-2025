#include <iostream>
#include <cstring>
using namespace std;

struct Venta {
    char fecha[11];         // "YYYY-MM-DD" + '\0'
    char codigo[8];         // Ej: "ART001" + '\0'
    char descripcion[30];   // Nombre del producto
    char local[6];          // Ej: "LOC01" + '\0'
    float precio;
    int cantidad;
};

struct VentasProducto{
    char producto[30];
    int cantVentas;
};

bool periodoCoincide(Venta ventazas, char fechaUno[], char fechaDos[]);
void productosCuenta(VentasProducto vector[], char producto[], int ventas, int&cantProd);
void bubbleSort(VentasProducto vector[], int longitud);

int main() {
    Venta ventas;
    VentasProducto vectorProductos[20];
    int cantidadDeProductos = 0;

    char anioUno[5];
    cout << "Ingrese el anio en el que comienza su periodo (YYYY): ";
    cin >> anioUno;
    char mesUno[3];
    cout << "Ingrese el mes en el que comienza su periodo (MM): ";
    cin >> mesUno;
    char fechaInicio[8];
    strcpy(fechaInicio, anioUno);
    strcat(fechaInicio, "-");           
    strcat(fechaInicio, mesUno);

    char anioDos[5];
    cout << "Ingrese el anio en el que termina su periodo (YYYY): ";
    cin >> anioDos;
    char mesDos[3];
    cout << "Ingrese el mes en el que termina su periodo (MM): ";
    cin >> mesDos;
    char fechaFinal[8];
    strcpy(fechaFinal, anioDos);
    strcat(fechaFinal, "-");           
    strcat(fechaFinal, mesDos); 
 

    FILE* archivo = fopen("C:/Users/mvpas/Documents/Universidad/Algoritmos y Estructuras de Datos/Archivos/ventas.bin", "rb");
    if (!archivo) {
        cout << "No se pudo abrir el archivo ventas.bin\n";
        return 1;
    }
    int i = 0;

    while (fread(&ventas, sizeof(Venta), 1, archivo) == 1) {
        bool dentroDelPeriodo = periodoCoincide(ventas, fechaInicio, fechaFinal);
        if (dentroDelPeriodo){
            productosCuenta(vectorProductos, ventas.descripcion, ventas.cantidad, cantidadDeProductos);
        }
        i++; 
    }
    fclose(archivo);
    bubbleSort(vectorProductos, cantidadDeProductos);
    cout << "Los tres productos mas vendidos del periodo del " << fechaInicio << " al " << fechaFinal << " son: " << endl;
    for (int r = 0; r < 3; r++){
        cout << "------------------------" << endl;
        cout << vectorProductos[r].producto << " con un total de " << vectorProductos[r].cantVentas << " ventas." << endl;
    }
    return 0;
}

bool periodoCoincide(Venta ventazas, char fechaUno[], char fechaDos[]){
    /*char fechaVenta[8];
    strncpy(fechaVenta, ventazas.fecha, 7);
    fechaVenta[7] = '\0';*/
    bool coincide = (strncmp(ventazas.fecha, fechaUno, 7) >= 0 && strncmp(ventazas.fecha, fechaDos, 7) <= 0);
    return coincide;
}

void productosCuenta(VentasProducto vector[], char producto[], int ventas, int&cantProd){
    bool esta = false;
    for (int i = 0; i < cantProd; i++){
        if (strcmp(vector[i].producto, producto) == 0){
            esta = true;
            vector[i].cantVentas += ventas; 
        }
    }
    if (!esta){
        strcpy(vector[cantProd].producto, producto);
        vector[cantProd].cantVentas = ventas;
        cantProd++;
    }
}
//Ordeno de mayor a menor cantidad de ventas por producto
void bubbleSort(VentasProducto vector[], int longitud){
    for (int i = 0; i < longitud; i++ ){
        for (int j = 0; j < longitud - i - 1; j++){
            if (vector[j].cantVentas < vector[j+1].cantVentas){
                VentasProducto auxiliar = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = auxiliar;
            }
            else if (vector[j].cantVentas == vector[j+1].cantVentas){
                if (strcmp(vector[j].producto, vector[j+1].producto) > 0){
                    VentasProducto auxiliar = vector[j];
                    vector[j] = vector[j+1];
                    vector[j+1] = auxiliar;
                }
            }
        }
    }
}