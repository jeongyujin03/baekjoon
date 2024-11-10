#include <iostream>
using namespace std;

int main(void){
    int dotX[1001] = {0,};
    int dotY[1001] = {0,};
    int x, y;
    for(int i=0; i<3; i++){
        cin >> x >> y;
        dotX[x]++;
        dotY[y]++;
    }

    for(int i=1; i<1001; i++){
        if(dotX[i] == 1)
            cout << i << " ";
    }
    for(int i=1; i<1001; i++){
        if(dotY[i] == 1)
            cout << i;
    }
    return 0;
}