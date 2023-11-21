#include <iostream>
#include <stdlib.h>

using namespace std;
//Dados 20 números, exibir a média aritmética dos números pares e a média aritmética dos números ímpares.

int main() {
    int num;
    int somaNP;
    double mediaNP;
    int somaNI;
    double mediaNI;

    for (int i = 1; i <=6 ; ++i) {
        cout << "Digite um numero" << endl;
        cin >> num;
        if(num%2==0){
            somaNP = somaNP + num;
        } else{
            somaNI = somaNI + num;
        }
    }
    mediaNP = somaNP/2;
    mediaNI = somaNI/2;

    cout << "A media dos numeros pares e: " << mediaNP << endl;
    cout << "A media dos numeros impares e: " << mediaNI << endl;

    return 0;
}
