#include <iomanip>
#include <iostream>
using namespace std;
int finonacci(int n)
{
    if (n < 0)
        return 0; // nao existem valores negativos para a escala de fibonacci
    int x = 0;
    int y = 1;
    int aux = 0;
    int i = 1;

    while (i < n)
    {
        aux = x + y;
        x = y;
        y = aux;
        i++;
    }
    cout << x << endl;
    return x;
}
