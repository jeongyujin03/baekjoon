#include <iostream>
#define DIVIDE 10007
using namespace std;

int dp[1001]={1,1,2};
int tiling(int n){
    if(n == 1) return 1;
    else if(n == 2) return 2;

    if(dp[n] == 0){
        dp[n] = (tiling(n-1) + tiling(n-2))%DIVIDE;
    }
    return dp[n];
}

int main(void){
    int n;
    cin >> n;
    cout << tiling(n);
    return 0;
}