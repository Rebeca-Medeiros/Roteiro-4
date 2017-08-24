#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

float Porcento(float votos, float t)
{
    float x;
    x = (votos/t) * 100;
    return x;
}

int Ranking(int *Jogadores, int t)
{
    int cont;

    for(cont = 1; cont < 24; cont++){
        if(Jogadores[cont] != 0){
            cout << "%d \t" << cont << " %d \t"<< Jogadores[cont] << "%1.f%%" << Porcento(Jogadores[cont], t) << endl;
        }
    }
}

int Melhor(int *Jogadores){

    int maior=0;
    int cont;

    for(cont = 1;cont < 24;cont++){
        if(Jogadores[cont] > maior){
            maior = Jogadores[cont];
        }
    }

    for(cont = 1; cont < 24;cont++ ){
        if(Jogadores[cont] == maior){
            return cont;
        }
    }
}

int main()
{
    int i;
    int t = 0;
    int cont;
    int Jogadores[24];


    for(i = 0;i < 24; i++){
        Jogadores[i] = 0;
    }

    while(i!=0){

        cout << "Numero do jogador ou 0 para encerrar: " << endl;

        cin >> i;

        if(i > 23){
           cout << "numero de jogador invalido" << endl;
        } else {
            t++;
            Jogadores[i]++;
        }

    }
        t--;


        cout << "\n Resultado da votacao: " << endl;
        cout << "\n Foram computados " << t << " votos" << endl;

        cout << "Jogador\t Votos\t   \n" <<  Ranking(Jogadores,t) << endl;
        //Ranking(Jogadores,t);

        cont = Melhor(Jogadores);

        cout << "O melhor foi o numero "  << cont << ", com "<< Jogadores[cont] << " votos " << ", correspondendo a " << Porcento(Jogadores[cont],t) << "do total de votos" << endl;

    return 0;
}


