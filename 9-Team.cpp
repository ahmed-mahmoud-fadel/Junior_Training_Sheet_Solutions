#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count = 0;
    cin >> n;
    while (n--)
    {
        int p, v, t;
        cin >> p >> v >> t;
        if(p+v+t >=2)
            count++;
    }

    cout << count << endl;
}