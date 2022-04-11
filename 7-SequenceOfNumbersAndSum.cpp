#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    do{
        int sum = 0;
        for(int i = min(x, y); i <= max(x, y); i++){
            cout << i << " ";
            sum+=i;
        }
        cout << "sum =" << sum << endl;
        cin >> x >> y;
    }while(x > 0 && y > 0);
    
    return 0;
}