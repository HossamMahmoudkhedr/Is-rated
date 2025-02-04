#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    int q, x;
    set<int> s;
    auto result = s.end();
    cin >> q;
    while(q--){
        cin >> str >> x;
        if(str == "lower_bound"){
            result = s.lower_bound(x);
            if(result != s.end()){
                cout << *result << endl;
            }else{
                cout << -1 << endl;
            }
        }else if(str == "upper_bound"){
            result = s.upper_bound( x);
            if(result != s.end()){
                cout << *result << endl;
            }else{
                cout << -1 << endl;
            }
        }else if(str == "find"){
            result = s.find(x);
            if(result != s.end()){
                cout << "found" << endl;
            }else{
                cout << "not found" << endl;
            }
        }else{
            s.insert(x);
        }

    }
    return 0;
}
