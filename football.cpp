 #include <iostream>
 #include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <math.h>
#include <stack>
using namespace std;

int main()
{
    int n, f =0,s=0 ;
    string team, theTeam ,current ,first, second;
    cin >> n;
    stack <string> cont;
    for(int i =0;i <n ; i++){
        cin >> team;
        if(cont.empty()){
            cont.push(team);
            f += 1;
                first = team;
        }else{
            if(team == cont.top() && cont.top() != theTeam){
                f += 1;
            }else{
                s +=1;
                theTeam = team;
                second = theTeam;
            }
        }
    }
    if(f > s){
        cout << first;
    }else{
        cout << second;
    }
    return 0;
}
