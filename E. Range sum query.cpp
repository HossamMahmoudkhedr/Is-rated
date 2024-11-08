// Prefix sum
#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;



int main()
{
    int n, q, l, r;
    cin >> n >> q;

    long long arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i > 0){
            arr[i] = arr[i] + arr[i-1];
        }
    }


    for(int i = 0; i < q; i++){
        cin >> l >> r;
        if(l > 1){
            cout << arr[r-1] - arr[l-2] << endl;
        }else{
            cout << arr[r - 1] << endl;
        }
    }

    return 0;
}
