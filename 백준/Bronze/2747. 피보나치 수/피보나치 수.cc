#include <iostream>
#include <vector>
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int fib(int n, vector<int>& dp){
    if(n == 0 || n == 1){
        return dp[n];
    }
    else if(dp[n] == 0){
        dp[n] = fib(n-1, dp) + fib(n-2, dp);
    }
    return dp[n];
}

int main(void){
    FAST
    int n;
    cin >> n;
    
    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    cout << fib(n, dp);
    return 0;
}