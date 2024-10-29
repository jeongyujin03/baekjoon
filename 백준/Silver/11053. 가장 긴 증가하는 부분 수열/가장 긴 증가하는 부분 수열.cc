#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    int N, X;
    cin >> N;
    vector<int> arr(N+1);
    vector<int> dp(N+1, 1);//모든 dp값을 1로 초기화

    for(int i=1; i<=N; i++){
        cin >> arr[i];
    }

    for(int i=2; i<=N; i++){
            for(int j=1; j<i; j++){
                if(arr[i] > arr[j]){
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
        }
    int res = 0;
    for(int i=1; i<=N; i++){
        res = max(res, dp[i]);
    }
    cout << res;
    return 0;
}