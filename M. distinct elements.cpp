#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int n, q, x;
    int arr[100001]={0};
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> x;
        arr[x] = 1;
    }

    for(int i = 1; i < 100001; i++){
        arr[i] += arr[i-1];
    }

    int arrSize = arr[100000];
    
    for(int i = 0; i < q; i++){
        cin >> x;
        cout << arr[x-1] << " " << arrSize - arr[x] << endl;
    }

    return 0;
}
