#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, top, side1, side2, up, counter = 0;

    cin >> n;
    cin >> top;
    for(int i =0; i< n; i++){
        cin >> side1 >> side2;
        up = 7 - top ;
        if(i > 0){
            if(7 - side1 != up && 7 - side2 != up && side1 != up && side2 != up){
                top = up;
                counter += 1;
            }else{
                counter -= 1;
            }
        }

    }
    if(counter == n - 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}

