#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getSum(vector<int>& stair){
    int N = stair.size() - 1;
    vector<int> dp(N+1);

    dp[1] = stair[1];
    dp[2] = stair[1] + stair[2];
    dp[3] = max(stair[1] + stair[3], stair[2] + stair[3]);
    for(int i=4; i<=N; i++){
        dp[i] = max(dp[i-2] + stair[i], dp[i-3] + stair[i-1] + stair[i]);
    }
    return dp[N];
}

int main(void){
    int N;
    cin >> N;
    vector<int> stair(N+1);
    for(int i=1; i<=N; i++){
        cin >> stair[i];
    }
    cout << getSum(stair);
    return 0;
}