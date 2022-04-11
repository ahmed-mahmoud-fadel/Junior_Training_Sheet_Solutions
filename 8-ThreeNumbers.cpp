#include<bits/stdc++.h>
using namespace std;
int main(){
    int k, s, count = 0;
    cin >> k >> s;
    for (int x = 0; x <= k; x++)
        for (int y = 0; y <= k; y++)
                if(s-x-y >= 0 && s-x-y <= k)
                    count++;
    cout << count << endl;
}