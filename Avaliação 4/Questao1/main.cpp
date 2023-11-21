#include <iostream>
#include <stdlib.h>

using namespace std;

// Exibir os múltiplos de 5 no intervalo de 1 a 100.

int main() {
    for (int i = 1; i <= 100 ; ++i) {
        if (i%5==0){
            cout << i << endl;
        }
    }
}
