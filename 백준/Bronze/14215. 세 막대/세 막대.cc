#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int tri[3];
    for(int i=0; i<3; i++){
        cin >> tri[i];
    }
    sort(tri, tri+3);
    if(tri[0] + tri[1] > tri[2]){
        cout << tri[0] + tri[1] + tri[2];
    }
    else{
        while(1){
            if(tri[0] + tri[1] > tri[2]) break;
            tri[2]--;
        }
        cout << tri[0] + tri[1] + tri[2];
    }
    return 0;
}