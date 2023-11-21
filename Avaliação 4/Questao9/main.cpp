#include <iostream>
#include <stdlib.h>

using namespace std;

//Entrar com o nome, idade e sexo de 20 pessoas.
// Exibir o nome da pessoa se ela for do sexo masculino e tiver mais que 21 anos.


int main() {
    int idade;
    string nome;
    string sexo;

    for (int i = 1; i <=2; ++i) {
        cout << "Digite seu nome" << endl;
        cin >> nome;
        cout << "Digite sua idade" << endl;
        cin >> idade;
        cout << "Digite M se for do sexo Masculino ou F se for do sexo Feminino"<< endl;
        cin >> sexo;

        if (idade > 21){
            if (sexo == "M" || sexo == "m"){
                    cout << nome << endl;
            }
        }

    }
    return 0;
}
