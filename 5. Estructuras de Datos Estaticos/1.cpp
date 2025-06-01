#include <iostream>
using namespace std;

int main(){
    int numero[5];

    for (int i = 0; i < 5; i++){
        cout << "Numero " << i+1 << ": ";
        cin >> numero[i];
    }
    for (int i = 4; i >= 0 ; i--){
        cout << "Numero: " << numero[i] << endl;
    }
    return 0;
}
