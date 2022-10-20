#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <string>
#include <math.h>
#include <stack>
using namespace std;
#define Max_Digits 10

int main()
{
    int n, k, counter, result = 0;
    string number;
    cin >> n >> k;

    char arr[k+1];
    char real[10] = {'0','1','2','3','4','5','6','7','8','9'};
    for(int i =0; i<= k;i++){
        arr[i] = real[i];
    }

    for(int l = 0; l<n;l++){
        cin >> number;
            counter = 0;
        for(int i= 0; i<=k;i++){
            for(int j =0;j < number.size() ;j++){
                if(arr[i] == number[j]){
                    counter += 1;
                    break;
                }
            }
        }
        counter == k+1 ? result +=1: NULL;
    }


    cout << result << endl;
    return 0;
}

