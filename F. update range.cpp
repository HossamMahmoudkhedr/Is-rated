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

    long long arr1[n], arr2[n+1]={0},val;

    for(int i = 0 ; i < n; i++){
        cin >> arr1[i];
    }

    for(int i = 0; i < q; i++){
        cin >> l >> r >> val;
        arr2[l-1] += val;
        arr2[r] = arr2[r] - val;
    }

    for(int i = 1; i < n; i++){
        arr2[i] = arr2[i] + arr2[i-1];
    }

    for(int i = 0 ; i < n; i++){
        arr1[i] = arr1[i] + arr2[i];
    }

    for(int i = 0 ; i < n; i++){
        cout << arr1[i] << " ";
    }
    return 0;
}
