#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >>n;
    map<string, int> users;
    while(n--){
        string name;
        cin >> name;

        if(users.find(name) == users.end()){
            users[name] = 0;
            cout << "OK" << endl;
        }else{
            users[name]++;
            cout << name << users[name] << endl;
        }
    }


    return 0;
}
