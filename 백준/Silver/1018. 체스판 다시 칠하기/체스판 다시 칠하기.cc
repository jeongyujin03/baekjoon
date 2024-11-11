#include <iostream>
#include <algorithm>
using namespace std;

int cntWB(int, int);
int cntBW(int, int);

string rePaint[50];
string WB[8]{
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
    };
    string BW[8]{
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
    };

int main(void){
    int N, M;
    cin >> N >> M;
    
    for(int i=0; i<N; i++){
        cin >> rePaint[i];
    }

    int tmp, res = 64;
    for(int i=0; i<=N-8; i++){
        for(int j=0; j<=M-8; j++){
            tmp = min(cntWB(i,j), cntBW(i,j));
            if(tmp < res) res = tmp;
        }
    }
    cout << res;
    return 0;
}

int cntWB(int x, int y){
    int cnt = 0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(rePaint[i+x][j+y] != WB[i][j]) cnt++;
        }
    }
    return cnt;
}

int cntBW(int x, int y){
    int cnt = 0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(rePaint[i+x][j+y] != BW[i][j]) cnt++;
        }
    }
    return cnt;
}