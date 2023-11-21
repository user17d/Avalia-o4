#include <iostream>
#include <stdlib.h>

using namespace std;

//Dados N números digitados pelo usuário, exibir o maior e o menor deles.

int main() {

    double MN;
    double MA;
    int n;
    int num;

    cout << "Digite a quantidade de numeros para a verificação" << endl;
    cin >> n;
    for (int i = 1; i <=n ; ++i) {
        cout << "Digite um numero" << endl;
        cin >> num;

        if (num > MA){
            MA = num;
        } if( num < MN ){
            MN = num;
        }
    }
    cout << "O maior numero digitado foi " << MA << ", e o menor foi " << MN << endl;
    return 0;
}
