#include <iostream>
#include <stdlib.h>

using namespace std;

int lanca_dado()
{
    int face;

    srand(time(NULL));

    face = rand() % 6;

    return face;
}

int main(void)
{
    int faces[6] = {0,0,0,0,0,0};
    int n, soma = 0, i;

    cout << "Quantas jogadas deseja fazer? ";
    cin >> n;

    while (n--)
    {
        cout << "aqui" << endl;
        switch (lanca_dado())
        {
        case 0:
            faces[0]++;
            break;
        case 1:
            faces[1]++;
            break;
        case 2:
            faces[2]++;
            break;
        case 3:
            faces[3]++;
            break;
        case 4:
            faces[4]++;
            break;
        case 5:
            faces[5]++;
            break;
        }
    }

    for(int k : faces)
    {
        soma  = soma + k;
    }
    for(i = 0; i < 6; i++)
    {
        double p;

        p = (faces[i]/soma)*100.0;

        cout << "Ocorrencia da face " << i + 1 << ": " << p << "%" << endl;
    }

    return 0;
}