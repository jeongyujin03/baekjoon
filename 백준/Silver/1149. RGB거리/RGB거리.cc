#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int house[1001][3];
    house[0][0] = 0;
    house[0][1] = 0;
    house[0][2] = 0;

    for(int i=1; i<=N; i++){
        int tmp[3];
        cin >> tmp[0] >> tmp[1] >> tmp[2];
        house[i][0] = min(house[i-1][1], house[i-1][2]) + tmp[0];
        house[i][1] = min(house[i-1][2], house[i-1][0]) + tmp[1];
        house[i][2] = min(house[i-1][0], house[i-1][1]) + tmp[2];
    }
    cout << min(house[N][0], min(house[N][1], house[N][2]));
    return 0;
}