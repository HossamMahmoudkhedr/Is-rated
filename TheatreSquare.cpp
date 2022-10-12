 #include <iostream>
 #include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <string>
#include <math.h>
#include <stack>

using namespace std;
int main()
{
    long long n, m ,a;
    cin >> n >> m >> a;
    long long rectangle = n * m;
    long long square = a * a;

    if (n == 1 || m == 1){
        if( n * m > a * a){
        if(n > m){

        cout << n << endl;
        }else{
        cout << m << endl;
        }
        }else{
            cout << 1 << endl;
        }

    }else if(n == m && rectangle % square == 0 ){
        if( n * m > a * a){
            cout << (n * m) / (a * a) << endl;
        }else{
            cout << 1 << endl;
        }
    }else if (a * a > n * m){
        cout << 1 << endl;
    }
    else{
    cout << rectangle % square << endl;
    }
    return 0;
}




/* *************************** Solution *************************** */

 #include <iostream>
 #include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <string>
#include <math.h>
#include <stack>

using namespace std;
int main()
{
    long long n, m ,a;
    cin >> n >> m >> a;
    long long x = n / a;
    long long y = m /a;
    if(n% a != 0){
        x += 1;
    }
    if(m % a !=0){
        y += 1;
    }
    
    cout << x * y << endl;
    return 0;
}

