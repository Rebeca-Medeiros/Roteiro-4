#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned)time(0));
    int numero, dado, i, j;
    float percentagem[6] = {0,0,0,0,0,0};
    int d[6] = {0,0,0,0,0,0};

    cout<< "Digite o numero de vezes que o dado sera lancado:\n";
    cin>> numero;

    while (numero != 0)
    {
       for (int i = 0; i < numero; i++)
       {
            dado = rand() % 6 + 1;

            if (dado == 1)
            {
                d[0] += 1;
                percentagem[0] = (float)d[0];
            }
            if (dado == 2)
            {
                d[1] += 1;
                percentagem[1] = (float)d[1];
            }
            if (dado == 3)
            {
                d[2] += 1;
                percentagem[2] = (float)d[2];
            }
            if (dado == 4)
            {
                d[3] += 1;
                percentagem[3] = (float)d[3];
            }
            if (dado == 5)
            {
                d[4] += 1;
                percentagem[4] = (float)d[4];
            }
            if (dado == 6)
            {
                d[5] += 1;
                percentagem[5] = (float)d[5];
            }

        }
    }
        for (int j = 0; j < 6; j++)
        {
            cout<< "\nA porcentagem de vezes que o dado caiu no lado " << j+1 << " foi de: " << (percentagem[j]*100.0) << "%\n"<< endl;
        }
return 0;
}
