#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main()
{
    int t, n;
    string s;


    cin >> t;
    for(int i=0; i<t; i++){
        bool m,e,o,w;
        m=e=o=w= false;
        cin >> n >> s;

        for(int j= 0; j< n;j++){
                if(j ==0 ){

            if(tolower(s[j]) != 'm'){
                break;
            }else{
                m = true;

            }
            }

            if(j > 0){
                    if(tolower(s[j]) == 'm' && (!m || (m && tolower(s[j -1]) == 'm') ) ){
                        m=true;
                    continue;
                }

                if(tolower(s[j]) == 'e' && m && (!e || (e && tolower(s[j -1]) == 'e') )){
                            e=true;
                    continue;
                }

                if(tolower(s[j]) == 'o' && m && e && (!o || (o && tolower(s[j -1]) == 'o') )){
                        o = true;
                    continue;
                }


                if(tolower(s[j]) == 'w' && m && e && o && (!w || (w && tolower(s[j -1]) == 'w') )){
                        w = true;
                    continue;
                }

                if(tolower(s[j]) != 'm' || tolower(s[j]) != 'e' || tolower(s[j]) != 'o' || tolower(s[j]) != 'w'){
                    m = false;
                    break;
                }
            }
        }

        if(m&&e&&o&&w){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }


    return 0;

}
