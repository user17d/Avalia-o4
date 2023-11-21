#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

//Entrar com N números, exibir a metade e a raiz cúbica de cada número.
// Onde o valor N é dado também pelo usuário.

int main() {
    int num;
    cout << "Digite quantos numeros quer ultilizar\n"<< endl;
    cin >> num;

    for (int i = 1; i <= num ; i++) {
        double m = i/2;

        cout << "A metade do numero digitado é: "<< m
        << " ,e a raiz cubica do numero digitado é "<< cbrt(i)<<endl;
    }
    return 0;
}
