#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    string w;
    cin >> t;
 
    while(t--){
        cin >> w;
        w = w.substr(0, w.size() - 2);
        cout << w + 'i' << endl;
    }
    return 0;
}
