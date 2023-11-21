#include <iostream>
#include "stdlib.h"

using namespace std;

//Exibir o somatório dos números entre 20 e 60.

int main() {
  int soma;
    for (int i = 20; i <=60 ; ++i) {
        soma = soma + i;
        if (i == 60) {
            cout << soma << endl;
        }
    }
    return 0;
}
