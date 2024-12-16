#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;



int main()
{
    int r,c, cakes=0;
    vector <char> evilR;
    vector <char> evilC;
    cin >> r >> c;

    char arr[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 'S'){
                evilR.push_back(i);
                evilC.push_back(j);
            }
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c;j++){
            bool evilRow = false;
            bool evilCol = false;
            if(arr[i][j] != 'S'){
                for(int k = 0; k < evilR.size(); k++){
                    if(i == evilR[k] && evilRow == false){
                        evilRow=true;

                    }

                    if(j == evilC[k] && evilCol == false){
                        evilCol=true;
                    }
                    
                    if(evilRow && evilCol){
                        break;
                    }
                }


                if(!evilRow || !evilCol){
                    cakes++;
                }
            }
        }
    }
    cout << cakes << endl;
    return 0;
}
