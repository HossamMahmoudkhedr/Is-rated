 #include <iostream>
 #include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <string>
#include <math.h>
#include <stack>

int calc(long long int n){
    long long int result = pow(-1 , n) * n;
    return result;
}

int funcresult(long long int number){
    long long int finalResult = 0;
    for(long long int i = 1; i<= number; i++){
        finalResult += calc(i);
    }
    return finalResult;
}
using namespace std;
int main()
{
    string number;
    cin >> number;
    int realNum =  stoi(number);
    string newNum = "";
    if(number[number.size() - 1] != 0){
        for(int i =0; i< number[number.size() - 2] ;i++){
            newNum += number[i];
        }
    }
    
    if(realNum - (number[number.size() - 1] - '0') > 100000){
        long long int lastNumber = 100000;
        long long int div = (realNum - (number[number.size() - 1] - '0')) / lastNumber;
        int nom = lastNumber;
        if(number[number.size() - 1] != '0'){

    cout << funcresult(nom) * div  <<  number[number.size() - 1]<< endl;
        }else{
             cout << funcresult(nom) * div  << endl;
        }
    }else{
        cout << funcresult(realNum) << endl;
    }
    /*
    if(number > 100000){
        long long int lastNumber = 100000;
        long long int div = number / lastNumber;
        number = lastNumber;
    cout << funcresult(number) * div  << endl;
    }else{
        cout << funcresult(number) << endl;
    }
    */

    return 0;
}






/*********************** Solution ***********************/

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
    long long n;
    cin >> n;
    if(n%2 ==0){
        cout << n/2 << endl;
    }else{
        cout << n/2 - n << endl;
    }

    return 0;
}

