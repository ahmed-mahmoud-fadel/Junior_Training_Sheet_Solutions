#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, prev = 0, next = 1;
    cin >> n;
    if(n==1)
        cout << prev << endl;
    else if(n == 2)
        cout << prev << " " << next << endl;
    else{
        cout << prev << " " << next << " ";
        for (int i = 2; i < n; i++)
        {
            int res = prev + next;
            cout << res << " ";
            prev = next;
            next = res;
        }
        cout << endl;
    }

}