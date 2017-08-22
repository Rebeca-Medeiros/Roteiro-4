#include <iostream>

using namespace std;

int main ()
{
    int maior;
    int numero;

    maior = -99999;

    while(numero != 0){
        cout << "Digite um numero: " << endl;
        cin >> numero;

        if((numero > maior) && (numero != 0)){
            maior = numero;
        }
    }

    if(maior != -99999){
        cout << "O maior numero eh: " << maior << endl;
    } else {
        cout << "Nenhum numero lido" << endl;
    }

    return 0;

}
