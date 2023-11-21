#include <iostream>
#include "stdlib.h"

using namespace std;

// Exibir os números múltiplos de 3 no intervalo de 10 a 30.

int main() {
    for (int i = 10; i <=30 ; ++i) {
        if (i%3==0){
            cout << i << endl;
        }
    }
    return 0;
}
