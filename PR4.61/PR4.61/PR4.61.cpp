#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double P, P1;
    int i, j;
    P = 1;
    i = 1;
    while (i <= 3)
    {
        P1 = 0;
        j = 1;
        while (j <= 4 - i)
        {
            P1 += sqrt(fabs(tan(i))) / i + j * j;
            j++;
        }
        P *= P1;
        i++;
    }
    cout << P << endl;
    P = 1;
    i = 1;
    do {
        P1 = 0;
        j = 1;
        do {
            P1 += sqrt(fabs(tan(i))) / i + j * j;
            j++;
        } while (j <= 4 - i);
        P *= P1;
        i++;
    } while (i <= 3);
    cout << P << endl;
    P = 1;
    for (i = 1; i <= 3; i++)
    {
        P1 = 0;
        for (j = 1; j <= 4 - i; j++)
        {
            P1 += sqrt(fabs(tan(i))) / i + j * j;
        }
        P *= P1;
    }
    cout << P << endl;
    P = 1;
    for (i = 3; i >= 1; i--)
    {
        P1 = 0;
        for (j = 4 - i; j >= 1; j--)
        {
            P1 += sqrt(fabs(tan(i))) / i + j * j;
        }
        P *= P1;
    }
    cout << P << endl;
    return 0;
}
