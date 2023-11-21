#include <iostream>
#include <stdlib.h>

using namespace std;

// Entrar com as idades de 20 pessoas. Exibir a média aritmética das idades, a maior idade e menor idade.

int main() {

    int idade;
    float mediaI;
    int soma;
    int ma;
    int mn;

    for (int i = 1; i <=20 ; ++i) {
        cout << "Digite sua idade: " << endl;
        cin >> idade;

        soma  = soma + idade;

        if (idade > ma){
            ma = idade;
        }
        if (idade < mn) {
            mn = idade;
        }
    }
    mediaI = soma/2;

    cout << "Maior idade: " << ma << endl;
    cout << "menor idade: " << mn << endl;
    cout << "media das idade: " << mediaI << endl;
    return 0;
}
