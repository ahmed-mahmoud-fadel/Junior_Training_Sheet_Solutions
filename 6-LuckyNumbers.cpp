#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, exist = 1; 
    char l1 = '4', l2 ='7';
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        bool islucky = true;
        string num = to_string(i);
        for(char c : num){
             if(c == l1 || c == l2)
                 continue;
            else{
                islucky = false;
                break;
            }
        }
        if(islucky){
            cout << i << " ";
            exist = 0;
        }
    }
    if(exist)
        cout << -1;
    cout << endl;
    
    return 0;
}