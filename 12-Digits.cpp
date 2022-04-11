#include<bits/stdc++.h>
using namespace std;

int main(){
    string c;
    int t;
    long long x;
    cin >> t;
    while(t--){
        cin >> x;
        c = to_string(x);
        for (int i = c.length() -1; i >= 0; i--)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }
}