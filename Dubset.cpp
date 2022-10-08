 #include <iostream>
 #include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <math.h>
#include <stack>

using namespace std;

string trim(string s){
    string result = "";
    for(int i =1;i< s.size();i++){
            result += s[i];
    }
    return result;
}
int main()
{
    string remix, song= "";
    cin >> remix;
    for(int i = 0; i< remix.size();){
        if(remix[i] == 'W' && remix[i + 1] == 'U' && remix[i + 2]=='B'){
              song += " ";
              i = i+3;
        }else{
            song += remix[i];
            i += 1;
        }
    }
    cout << trim(song) << endl;
    return 0;
}

