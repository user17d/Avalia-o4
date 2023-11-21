#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

using namespace std;

//Entrar com dez números, exibir a metade e a raiz cúbica de cada número.

int main() {

    for (int i = 1; i <=10 ; ++i) {

        float m = i/2;

        cout << "A metade do numero é "<< m
             << " ,e a raiz cubica do numero é "<< cbrt(i)<< endl;

    }
    return 0;
}
