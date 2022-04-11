#include <iostream>
using namespace std;
int main()
{
    long long x, y[100] , fac =1;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> y[i];
    }
    for (int i = 0; i < x; i++)
    {
        while (y[i] > 0)
        {
            fac *= y[i];
            y[i] -= 1;
        }
        if (i == (x-1))
            cout << fac ;
        else
            cout << fac << endl;
        fac = 1;
    }
    return 0;
}