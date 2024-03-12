#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;


int main() {

    int t, n;
    cin >> t;
    while(t--){
        int x;
        cin >> n;
        set<int> numbers;
        for(int i=0; i <n ;i++){
            cin >> x;
            numbers.insert(x);
        }
        cout << numbers.size() - (numbers.size()-n)%2 << endl;
    }
    return 0;
}
