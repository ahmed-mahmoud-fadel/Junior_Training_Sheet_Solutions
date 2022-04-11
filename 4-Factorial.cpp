#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        long long sum = 1;
        cin >> x;
        for (int i = 1; i <= x; i++)
        {
            sum*=i;
        }
        cout << sum << endl;
    }
    
    return 0;
}