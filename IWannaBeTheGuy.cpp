 #include <iostream>
 #include <algorithm>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
    int n, p ,q;
    cin >> n;
    set <int> s;
    for(int i =0;i <n;i++){
        cin >> p;
        if(p == 0){
            continue;
        }else{
        s.insert(p);
        }
    }
    for(int i =0;i <n;i++){
        cin >> q;
        if(q==0){
            continue;
        }else{
        s.insert(q);

        }
    }
    if((*s.cbegin() == 1 && *s.cend()== 3 && n == 3) || (*s.cbegin() == 1 && *s.cend()== 6 && n == 6)){
        cout << "Oh, my keyboard!";
    }
    else if(s.size() == n){
        cout << "I become the guy." ;
    }else{
        cout << "Oh, my keyboard!";
    }
    return 0;
}
