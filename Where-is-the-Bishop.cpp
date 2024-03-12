#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    int t;
    cin >> t;


    while(t--){
        char arr[9][9];
        for (int i=1; i<9;i++){
            for (int j=1; j<9;j++){
                cin >> arr[i][j];
            }
        }
        for (int i=1; i<9;i++){
            for (int j=1; j<9;j++){
                    if(arr[i][j] == '#'){
                        if(arr[i - 1][j-1] == '#' && arr[i-1][j+1] == '#' && arr[i+1][j-1] == '#' && arr[i+1][j+1] == '#'){
                            cout << i << " " << j << endl;
                            break;
                        }
                    }
                }
            }
    }
    return 0;
}
