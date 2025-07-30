#include <iostream>
using namespace std;
/* Tenemos 20 cajas, cada una con un peso distinto. Queremos repartirlas entre 4
camiones, de forma que todos lleven más o menos el mismo peso.
Cómo se hace la asignación:
Primero ordenamos las cajas de la más pesada a la más liviana. Luego, vamos asignando
cada caja al camión que tenga menos peso acumulado hasta el momento*/
struct Caja {
int id;
float peso;
};
struct Camion {
int id;
float carga_total;
};
void leerVector(Caja[], int dimension);
void ordenarVector (Caja[]);
void asignarCajaACamion(Caja[], Camion[], int dimVectorCaja, int dimVectorCamion);
int main (){

};

void leerVector (Caja vector[], int dimensionVector){
    for (int i = 0; i < dimensionVector; i++){
        cout << "Ingresa el id de la caja " << i + 1 << ": " << endl;
        cin >> vector[i].id;
        cout << "Ingresa el peso de la caja " << i + 1 << ": " << endl;
        cin >> vector[i].peso;
    }


};