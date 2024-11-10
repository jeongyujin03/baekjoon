#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;

    for(int x=-999; x<=999; x++){
        for(int y=-999; y<=999; y++){
            int res1 = a*x + b*y;
            int res2 = d*x + e*y;
            if(res1 == c && res2 == f){
                cout << x << " " << y;
                return 0;
            }
        }
    }
}