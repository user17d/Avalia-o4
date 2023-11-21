#include <iostream>
#include <stdlib.h>

using namespace std;

//Dados N números digitados pelo usuário, exibir o somatório deles. Onde o valor N é dado também pelo usuário.

int main() {
    int n;
    int n1;
    int r;

    cout << "Digite quantos numeros deseja somar" << endl;
    cin >> n;

    for (int i = 1; i <=n ; ++i) {
        cout << "Digite um numero" << endl;
        cin >>n1;

        r = r + n1;
    }
    cout << "A soma dos numeros digitados é: " << r << endl;
    return 0;
}
