#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    long long int t, n,s;
    cin >> t;
    while(t--){
    vector <long long int> result;
        long long int sum = 0;
        cin >> n >> s;
        if(n*(n+1) / 2 < s){
            cout << -1 << endl;
            continue;
        }
        
        for(int i = n; i >= 1; i--){
            if(sum + i <= s){
                sum += i;
                result.push_back(i);
            }
            if(sum == s){
                break;
            }
        }

        for(int i = 0; i < result.size(); i++){
            cout << result[i] << " ";
        }

        if(t >= 1){
            cout << endl;
        }
    }


    return 0;
}
