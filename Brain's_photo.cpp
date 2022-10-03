 #include <iostream>
 #include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <math.h>
#include <stack>
using namespace std;

int main()
{
    int n,m;
    string status;
    cin >> n >> m;
    char arr[n][m] ;

    for(int i=0;i<n;i++){
       for(int j =0;j<m;j++){
        cin >> arr[i][j];
       }
    }
    for(int i =0; i< n;i++){
        for(int j=0;j< m; j++){
            if(arr[i][j] == 'W' || arr[i][j] == 'B' || arr[i][j] == 'G'){
                status = "#Black&White";
            }
            else{
                status = "#Color";
                break;
            }
        }
        if(status == "#Color"){
            break;
        }
    }
    cout << status << endl;
    return 0;
}

