#include <iostream>
using namespace std;

int main(void){
    int N;
    cin >> N;

    int paper[100][100] = {0,};
    int x, y, cnt = 0;
    while(N--){
        cin >> x >> y;
        for(int i=y; i<y+10; i++){
            for(int j=x; j<x+10; j++){
                if(!paper[i][j]){
                    cnt++;
                    paper[i][j] = 1;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}