#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned)time(0));
    int palpite;
    int aleatorio = rand() % 100 + 1;

    cout << "Adivinhe o numero entre 1 e 100: " << endl;
    cin >> palpite;

    while(palpite != aleatorio){
        if(palpite != aleatorio){
            if(palpite > aleatorio){
                cout << "Muito alto. Tente novamente." << endl;

                cout << "Adivinhe o entre 1 e 100: " << endl;
                cin >> palpite;
            } else {
                cout << "Muito baixo. Tente novamente." << endl;

                cout << "Adivinhe o numero entre 1 e 100: " << endl;
                cin >> palpite;
            }
        }
    }

    cout << "Parabens. Voce adivinhou o numero." << endl;

    return 0;

}
