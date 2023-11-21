#include <iostream>
#include <stdlib.h>

using namespace std;

//Entrar com dois números que indiquem o limite inferior e superior de um intervalo.
// Exibir os números impares entre o intervalo.

int main() {
    int n1;
    int n2;

    cout << "Digite um numero"<<endl;
    cin >> n1;
    cout << "Digite um numero"<<endl;
    cin >> n2;

    if (n1<n2){
        for (int i = n1; i <= n2 ; ++i) {
            if (i%2==1){
                cout << i << endl;
            }
        }
    } else {
        for (int i = n2; i <= n1; ++i) {
            if (i % 2 == 1) {
                cout << i << endl;
            }
        }
    }
    if (n1 == 0 && n2 == 0){
        cout << "Não existe intervalo entre os numeros digitados" << endl;
    }
    return 0;
}
