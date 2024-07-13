#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    long long int n,col, remaining, row;
    cin >> n;
    remaining =  n%4;
    row = n / 4;

    if(row%2 == 0){
        col =  remaining ;
    }else{
        col = 3 - remaining;
    }
    cout << row << " " << col << endl;

    return 0;
}
