#include<bits/stdc++.h>
using namespace std;
int main(){
    int A, B; 
    int number, digit;
    bool stop = true, flag = false;
    cin >> A >> B; 
    for (int i = A; i <= B; i++)
    {
        number = A;
        while(number > 0){
            int digit = number%10;
            number/=10;
            if(digit == 4 || digit == 7){
                flag = true;
                if(number == 0){
                    stop = false;
                    cout << i << " ";
                }
            }
            else {
                flag = false;
                break;
            }
        }
        if (flag == false && stop == true)
            cout << -1;
    }
}