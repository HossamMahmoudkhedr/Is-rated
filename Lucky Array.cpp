#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    long long n, minimum, x;
    cin >> n;
    long long arr[n];
    cin >>x;
    arr[0] = x;
    minimum = x;
    for (long long i = 1; i < n; i++){
        cin >> x;
        if(x< minimum){
            minimum = x;
        }
        arr[i] = x;
    }

    long long counter = 0;
    for (long long i = 0; i < n;i++){
        if(arr[i] == minimum){
            counter++;
        }
    }

    if(counter%2 != 0){
        cout << "Lucky" << endl;
    }else{
        cout << "Unlucky" << endl;
    }
    return 0;
}
