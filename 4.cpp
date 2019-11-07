#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n, soma = 0, maxv, i;
    int array[23];
    float porcentagem;

    for(int j : array)
    {
        j = 0;
    }

    while (n != 0)
    {
        cout << "Quem foi o melhor da partida? [voto = 1 - 23] (0 = fim)" << endl;
        cin >> n;

        if(n == 0)
        {
            break;
        }
        else if (n < 0 || n > 23)
        {
            cout << "Voto invalido, tente novamente um numero entre 1 e 23 ..." << endl;
            continue;
        }
        else
        {
            array[n-1]++;
            cout << "Voto computado com sucesso!" << endl;
        }
    }

    for(int k : array)
    {
        soma = soma + k;
    }

    cout << "Jogadores||Votos||Porcentagem de votos" << endl;
    for(i = 0; i < 23; i++)
    {
        porcentagem = (array[i]/soma)*100.0;
        cout << i + 1 << "||" << array[i]<< "||" << porcentagem << endl;
    }
    cout << "Total de votos: " << soma << endl;

    return 0;
}