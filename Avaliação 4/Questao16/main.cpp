#include <iostream>
#include <stdlib.h>

using namespace std;
//Dadas as idades de várias pessoas, exibir a menor idade, a maior idade e a média aritmética das idades. O
//programa termina quando for digitada uma idade -1.

int main() {
    double idade;
    int soma;
    double medI;
    int MaiorI;
    int MenorI;

    do {
        cout << "Digite sua idade: " << endl;
        cin >> idade;
        soma = soma + idade;

        if (idade > MaiorI){
            MaiorI = idade;
        }
        if (idade<MenorI){
            MenorI = idade;
        }
    } while (idade != -1);

    medI = soma/2;
    cout << "maior idade: " << MaiorI << endl;
    cout << "menor idade: " << MenorI << endl;
    cout << "media das idades: " << medI << endl;

    return 0;
}
