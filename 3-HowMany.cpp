#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, even = 0, odd = 0, pos=0, neg=0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x%2 == 0)
            even++;
        else
            odd++;
        if(x < 0)
            neg++;
        else if(x > 0)
            pos++;
    }
    cout << "Even: " << even
    << "\nOdd: " << odd
    << "\nPositive: " << pos
    << "\nNegative: " << neg << endl;
    return 0;
}