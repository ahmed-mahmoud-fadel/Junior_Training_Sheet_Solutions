#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, gcd = 0;
    cin >> a >> b;
    for(int i =1; i <= max(a, b); i++){
        if(a%i==0 && b%i==0)
            if(gcd < i)
                gcd = i;
    }
    cout << gcd << endl;
    return 0;
}