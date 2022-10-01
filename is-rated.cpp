 #include <iostream>
 #include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int n, before, after;
    bool isRated = false;
    cin >> n;
    int arr[n][2] ={};
    vector <int> arrange;
    for(int i=0;i< n; i++){
        cin >> before >> after;
        arr[i][0] = before;
        arr[i][1] = after;
    }

    for(int i=0; i< n;i++){
        if(arr[i][0] == arr[i][1]){
            isRated = false;
        }else{
            isRated = true;
            break;
        }
    }

    if(isRated == false){
        for(int i=0;i<n;i++){
            arrange.push_back(arr[i][0]);
        }
        reverse(arrange.begin(), arrange.end());
        if(std::is_sorted(arrange.begin(), arrange.end())){
            cout << "maybe" << endl;
        }else{
            cout << "unrated" << endl;
        }


    }else{
        cout << "rated" << endl;
    }
    

    return 0;
}
