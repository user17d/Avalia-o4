#include <iostream>
#include <stdlib.h>

using namespace std;

//Dado um número inteiro e positivo, exibir sua tabuada de multiplicar.

int main() {
    int num;
    int result;

    cout << "Digite um numero"<< endl;
    cin >> num;

    for (int i = 1; i <=10; ++i) {
        result = num * i;
        cout << num << " x " << i << " = " << result << endl;
    }
    return 0;
}
