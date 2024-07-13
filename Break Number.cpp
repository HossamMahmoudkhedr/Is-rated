#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    long long int n, x, times = 0, maximum = 0;
    cin >> n;
    for(long long int i = 0; i < n;i++){
        cin >> x;
        for(long long int j = x; j > 0 ; j/=2){
            if(j%2 == 0){
                times += 1;
            }else{
                if(times > maximum){
                    maximum = times;
                }
                times = 0;
                break;
            }
        }
    }

    cout << maximum << endl;

    return 0;
}
