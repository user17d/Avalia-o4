#include <iostream>
#include <stdlib.h>

using namespace std;

//Dados N números digitados pelo usuário, exibir o somatório, o maior e o menor deles.

int main() {

    double MN;
    double MA;
    double soma;
    int n;
    int num;

    cout << "Digite a quantidade de numeros para a verificação" << endl;
    cin >> n;
    for (int i = 1; i <=n ; ++i) {
        cout << "Digite um numero" << endl;
        cin >> num;

        soma = soma + num;

        if (num > MA){
            MA = num;
        } if( num < MN ){
            MN = num;
        }
    }
    cout << "O maior numero digitado foi " << MA << ", e o menor foi " << MN << endl;
    cout << "A soma total equivale a: " << soma << endl;

    return 0;
}