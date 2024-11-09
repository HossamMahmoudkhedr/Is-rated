#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string s;
    int q,l,r,c=0;
    cin >> s >> q;
    int arr[s.size()]={0};

    for(int i = 0; i < s.size();i++){
        if(s[i] == 'a'){
            c += 1;
        }
            arr[i]=c;
    }

    for(int i = 0; i < q; i++){
        cin >> l >> r;

        if(l == 1){
            cout << arr[r-1] << endl;
        }else{
            cout << arr[r-1] - arr[l-2] << endl;
        }
    }

    return 0;
}
