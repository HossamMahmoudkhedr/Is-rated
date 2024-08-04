#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int counter = 0;
    for (int i = 0; i < n;i++){
        if(arr[i] == arr[0]){
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
