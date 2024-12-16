#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;



int main()
{
    int n, s=0, d=0;
    bool sejera = true;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int r=0,l=n-1;

    while(r<=l){
        int large;
        if(arr[r] > arr[l]){
            large = arr[r];
            r++;
        }else{
            large = arr[l];
            l--;
        }

        if(sejera){
            s+= large;
        }else{
            d+= large;
        }

        sejera = !sejera;
    }

    cout << s << " " << d << endl;
    return 0;
}
