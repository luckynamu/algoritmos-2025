#include <iostream>
using namespace std;
/*Si declaro un struct, luego puedo usarlo como tipo de dato. Es mejor declararlo afuera del main para poder
usarlo tanto en el main como en cualquier funcion.
Es mejor pasar por referencia (&Estructura) los valores si es muy grande la estructura*/
int main(){
    struct Persona{
        int edad;
        string nombre;
        float altura;
    };
}