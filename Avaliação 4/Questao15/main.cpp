#include <iostream>
#include <stdlib.h>

using namespace std;

// Entrar com os sexos de várias pessoas (m ou f). Exibir a quantidade de pessoas do sexo masculino e a quantidade
//de pessoas do sexo feminino. O algoritmo termina quando é digitado um sexo @.

int main() {
    int SM;
    int SF;
    string sexo;

    do {
        cout << "Digite M se for do sexo Masculino ou F se for do sexo Feminino: " << endl;
        cin >> sexo;

        if (sexo == "M" || sexo == "m"){
            SM++;
        } else{
            SF++;
        }
    } while (sexo != "@");

        cout << "A quantidade de pessoas do sexo Masculino é: " << SM << endl;
        cout << "E a quantidade de pessoas do sexo Feminino é: " << SF << endl;
}
