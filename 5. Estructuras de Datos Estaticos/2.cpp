#include <iostream>
using namespace std;

int main(){
    int numeros[10], numeroABuscar;
    //bool encontrado = false;
    char esta = 'N';
    cout<< "ingrese 10 numeros enteros" <<endl;
    for (int i = 0; i < 10; i++){
        cout << "Numero " << i+1 << ": " << endl;
        cin >> numeros[i];
    }
    cout<<"que numero desea buscar:"<<endl;
    cin>> numeroABuscar;
    for(int i=0; i<10; i++){
        cout<< "El numero: " << numeroABuscar << " esta en la posicion" << i+1 << endl;
        //encontrado=true;
        esta='S';
    }

if (esta=='N'){
    cout<< "El numero no esta!";
}
return 0;
}