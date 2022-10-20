#include <bits/stdc++.h>

using namespace std;
//This function is to show how to store too long number
int* getBigNumber(string str){
    int x= str.size(), a = 0;

    int* arr = new int[str.size()];


    while(a!= x){
        arr[a] = str[a] - '0';
        a++;
    }

    return arr;
}
const int MXN = 600;

int main() {
	ios_base::sync_with_stdio(false);
	string s1, s2;
	while (cin>>s1) {
		cin>>s2;
		reverse(s1.begin(), s1.end());
		reverse(s2.begin(), s2.end());
		int a[MXN];
		memset(a, 0, sizeof(a));
		for (int i=0; i<s1.length(); i++) {
			for (int j=0; j<s2.length(); j++) {
				a[i + j] += (s1[i]-'0') * (s2[j] - '0');
			}
		}
		for (int i=0; i<MXN - 1; i++) {
			a[i + 1] += a[i] / 10;
			a[i] %= 10;
		}
		int i = MXN - 1;
		while (i > 0 && a[i] == 0) i--;
		for (; i>=0; i--) cout<<a[i];
		cout<<endl;
	}
	return 0;
}


/****************************** What I tried to do ******************************/

 #include <iostream>
 #include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int* getBigNumber(string str){
    int x= str.size(), a = 0;

    int* arr = new int[str.size()];


    while(a!= x){
        arr[a] = str[a] - '0';
        a++;
    }

    return arr;
}


int main()
{
    string str1, str2 ;
    cin >> str1 >> str2;
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    unsigned long long int counter = 1, endi = 0, result;
    int* arr1 = getBigNumber(str1);
    int* arr2 = getBigNumber(str2);

    for(int i =0; i< str1.size();i++){
        for(int j =0;j< str2.size();j++){
             result = arr1[i] * arr2[j];
        }
        if(i > 0){
            counter *= 10;
            result = result * counter;
        }
        endi += result;
    }

    cout << endi << endl;



    return 0;
}
