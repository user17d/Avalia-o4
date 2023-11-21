#include <iostream>
#include <stdlib.h>

using namespace std;

// Entrar com números positivos e exibir se cada número é par ou ímpar. O algoritmo termina quando é digitado -1.

int main() {
    int num;

    do {
    cout << "Digite um numero: " << endl;
    cin >> num;
        if (num>=0){
            if (num %2 ==0){
                cout << num << " é par" << endl;
            }
            if (num%2==1){
                cout << num << " é impar" << endl;
            }
        } else {
            cout << "Não permitido" << endl;
        }
    } while (num != -1);

    cout << "Finalizado" << endl;

    return 0;
}
