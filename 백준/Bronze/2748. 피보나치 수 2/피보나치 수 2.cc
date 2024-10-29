#include <iostream>
using namespace std;

long long dp[91] = {0,1};
long long fib(int n){
    if(n == 0 || n == 1){
        return dp[n];
    }
    else if(dp[n] == 0){
        dp[n] = fib(n-1) + fib(n-2);
    }
    return dp[n];
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}