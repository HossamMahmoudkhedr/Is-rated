#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int n, k, x;
    unordered_map<int, int> m;
    cin >> n >> k;
    int arr[k], j=0;
    for(int i = 0; i < n; i++){
        cin >> x;
        m[x]++;
        if(m[x] == 1){
            arr[j]= i+1;
            j++;
        }
    }

    if(k <= m.size()){
        cout << "YES" << endl;
        for(int i = 0 ; i < k; i++){
            cout << arr[i] << " ";
        }
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
