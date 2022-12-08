#include <bits/stdc++.h>
using namespace std;
int main()
{
	int r1,r2,c1,c2,d1,d2;
	cin>>r1>>r2>>c1>>c2>>d1>>d2;
	for(int a=1;a<=9;a++){ // 1
		for(int b=1;b<=9;b++){ // 2
			for(int c=1;c<=9;c++){ // 3
				for(int d=1;d<=9;d++){ // 4
					if(a != b && a != c && a != d && b != c && b !=d && c != d){
						if(a+b == r1 && a+d == d1 && c+d == r2 &&
						   a+c == c1 && b+d == c2 && b+c == d2){
							cout<<a<<" "<<b<<endl;
							cout<<c<<" "<<d<<endl;
							return 0;
						}
					}
				}
			}
		}
	}
	cout<<-1<<endl;
}








/* ************************** Bullsh*t ************************** */

#include <bits/stdc++.h>
using namespace std;


int main()
{
    // X = (r1 - d2 + c1)/ 2
    // Y = (d2 - r2 - d1 + r1) /2
    // Z = d2 - Y
    // O = d1 - X
    int x, y, z ,o, r1, r2, c1, c2, d1 ,d2, remander;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    x= abs((r1 - d2 + c1)/ 2);
    y = abs((d2 - r2 - d1 + r1) /2);
    z = abs(d2 - y);
    o = abs(d1 - x);
    if(x == 0 || y == 0 || z == 0 || o ==0){
        cout << -1 << endl;
    }else{
        while(r1 != x + y && r2 != z + o && c1 != x + z && c2 != y + o && d1 != x + o && d2 != y + z){
        if(r1 != x + y){
                remander = r1 - (x + y);
            if(x > y){
                x += remander;
            }else{
                y += remander;
            }
        }
         if(r2 != z + o){
            remander = r2 - (z + o);
                if( z > o){
                    z +=remander;
                }else{
                    o +=remander;
                }
        }
         if( c1 != x + z){
            remander = c1 - (x + z);
            if(z > x){
                z += remander ;
            }else{
                x += remander;
            }
        }
        if(c2 != y + o){
                remander = c2 - (y + o);
            if(y > o){
                y += remander;
            }else{
                o += remander;
            }
        }
        if(d1 != x + o){
            remander = d1 - (x + o);
            if(x > o){
                x += remander;
            }else{
                o += remander;
            }
        }
         if(d2 != y + z){
            remander = d2 - (y + z);
            if(y > z){
                y += remander;
            }else{
                z += remander;
            }

        }
        }

    cout << abs(x) << " " << abs(y) << endl;
    cout << abs(z) << " " << abs(o) << endl;
    }


    return 0;
}
