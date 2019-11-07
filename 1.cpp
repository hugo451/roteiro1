#include <iostream>

using namespace std;

int main(void)
{
    int num, i = 0, maior, k;
    int array[100] = {0};

    for (i = 0; i < 100; i++)
    {
        cin >> num;

        array[i] = num;

        if (num == 0)
        {
            break;
        }
        
    }
    
    for (k = 0; k < i -1; k++)
    {
        if (maior < array[k])
        {
            maior = array[k];
        }
        
    }
    cout << maior << endl;
    
    
    return 0;
}