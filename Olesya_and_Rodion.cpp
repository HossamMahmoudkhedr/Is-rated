/* ********************** What i've tried to do ********************** */

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <math.h>
using namespace std;

long long binarySearch(long long high, long long low, long long t){
    while(low <= high){
    long long mid = (high + low) / 2;
        if(mid % t == 0){
            return mid;
        }else{
           low = mid + 1;
        }
    }
    return -1;

}
int main()
{
    int n, t;
    cin >> n >> t;
    if( n == 100){
        first =
    }
    long long first = pow(10, n- 1);
    long long last = (9 * first) + (first - 1);
    cout << binarySearch(last, first, t) << endl;
    
    return 0;
}


/* ********************** The solution ********************** */
 #include <iostream>
 #include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <math.h>
using namespace std;

int main()
{
    int n, t;
    while(cin >> n>>t){
        if(n == 1 && t == 10){
            cout << "-1" << endl;
        }else if(n >= 2 && t==10){
            for(int i = 1; i<n ;i++){
                cout << "1";
            }
            cout << "0" << endl;
        }else{
            for(int i =1;i <=n ;i++){
                cout << t;
            }
            cout << endl;
        }
    }
    return 0;
}
