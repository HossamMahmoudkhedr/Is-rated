#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;



int main()
{
    string s;
    int n, q, x, l, r;
    vector <int> v;

    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < q; i++){
        cin >> s;
        if(s == "pop_back"){
            v.pop_back();
        }else if(s == "front"){
            cout << v.front() << endl;
        }else if(s == "back"){
            cout << v.back() << endl;
        }else if(s == "sort"){
            cin >> l >> r;
            sort(v.begin() + (l-1), v.begin() + r );
        }else if(s == "reverse"){
            cin >> l >> r;
            reverse(v.begin() + (l-1) , v.begin() + r );
        }else if(s == "print"){
            cin >> x;
            cout << v[x-1] << endl;
        }else if(s == "push_back"){
            cin >> x;
            v.push_back(x);
        }
    }

    return 0;
}
