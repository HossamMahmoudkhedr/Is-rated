#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    string w;
    int flag;
    cin >> t;
 
    while(t--){
        cin >> w;
        flag = 0;
        for(int i = 0; i < w.size() - 1 && !flag; i++){
            if(w[i] == w[i+1]){
                flag = 1;
            }
        }
        if(flag){
            cout << 1 << endl;
        }else{
            cout << w.size() << endl;
        }
    }
    return 0;
}
