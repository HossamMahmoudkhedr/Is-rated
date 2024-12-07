#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;



int main()
{
    int n, num;
    bool lucky = true;
    cin >> n;
    num = n;

    while(num){
        if(num%10 != 4 && num%10 != 7){
            lucky = false;
            break;
        }
            num /=10;
    }

    if(lucky){
        cout << "YES" << endl;
    }else{
        if(n%4 == 0 || n%7 == 0 || n%47 == 0 || n%74 == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
