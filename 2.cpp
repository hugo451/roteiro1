#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int numero_aleatorio()
{
    int num;

    srand(time(NULL));

    num = rand()%100;

    return num;
}

int main(void)
{
    int tentativas = 0, numero, palpite;
    string pergunta, incentivo1, incentivo2, incentivo3, longe, acertou;

    pergunta = "Qual o numero que estou pensando? 0 - 100";
    incentivo1 = "Esquentando...";
    incentivo2 = "Ta quente...";
    longe = "Frio que nem gelo...";
    acertou = "Acerto mizeraviiii!!!!!!";

    numero = numero_aleatorio();

    while(palpite != numero)
    {    
        cout << pergunta << endl;
        cin >> palpite;

        if (palpite == numero)
        {
            cout << acertou << endl;
            cout << "Você tentou: " << tentativas << " vezes" << endl;
        }
        else if((palpite > numero && palpite <= numero + 10)|| (palpite < numero && palpite >= numero - 10))
        {
            cout << incentivo2 << endl;
            tentativas++;
        }
        else if ((palpite > numero && palpite <= numero + 20)|| (palpite < numero && palpite >= numero - 20))
        {
            cout << incentivo1 << endl;
            tentativas++;
        }
        else if(palpite > numero + 20 || palpite < numero - 20)
        {
            cout << longe << endl;
            tentativas++;
        }
        
    }
    


    
    return 0;
}