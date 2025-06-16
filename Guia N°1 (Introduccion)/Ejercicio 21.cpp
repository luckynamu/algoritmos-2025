#include <iostream>
using namespace std;
//Dados dos números enteros M y N, informar su producto por sumas sucesivas.
int main(){
    int numeroM, numeroN;
    int resultado = 0;
    cout << "Vamos a multiplicar dos numeros, ingrese el primero: ";
    cin >> numeroM;
    cout << "Ingrese el segundo: ";
    cin >> numeroN;
    cout << numeroM << " x " << numeroN << " = ";
    if (numeroN == 0 || numeroM == 0){
        cout << 0;
    }
    else{
        for (int i = 0; i < numeroN; i++){
            cout << numeroM;
            if (i < numeroN - 1){
                cout << " + ";
            }
            resultado += numeroM;
        }
        cout <<  " = " << resultado;
    }
    return 0;
}