#include <iostream>
#include <stdlib.h>

using  namespace std;

//Dados os números inteiros A e B, fazer um algoritmo que calcule 𝐴 elevado a 𝐵.

int main() {
    int A;
    int B;
    int result = 1;

    cout << "Digite um valor para A"<< endl;
    cin >> A;
    cout << "Digite um valor para B"<< endl;
    cin >> B;

    for (int i = 1; i <=B; ++i) {
        result = result * A;
    }

    cout << result << endl;
    return 0;
}
