#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int n, q , num;
    string s;
    cin >> n >> q;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for(int i = 0; i < q; i++){
        cin >> s;
        cin >> num;

        if(s == "lower_bound"){
            auto it = lower_bound(arr, arr+n, num);
            if(it == arr+n){
                cout << -1 << endl;
            }else{
                cout << *it << endl;
            }
        }else if(s == "upper_bound"){
            auto it = upper_bound(arr, arr+n, num);
            if(it == arr+n){
                cout << -1 << endl;
            }else{
                cout << *it << endl;
            }
        }else if(s == "binary_search"){
            bool found = binary_search(arr, arr+n, num);
            if(found){
                cout << "found" << endl;
            }else{
                cout << "not found" << endl;
            }
        }
    }
    return 0;
}
