#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int X;
    cin >> X;
    vector<pair<int,int>> dp(X+1);

    int plus = 1;
    bool isChangeFirst = false;
    bool isChangeSecond = false;

    // 초기 값 설정
    if (X >= 1) dp[1] = {1, 1}; // 분수 1/1
    if (X >= 2) dp[2] = {1, 2}; // 분수 1/2
    if (X >= 3) dp[3] = {2, 1}; // 분수 2/1

    if (X >= 4) {  // X가 4 이상일 때만 for 루프 실행
        for (int i = 4; i <= X; i++) {
            if (dp[i-1].first == 1 && !isChangeFirst) {
                dp[i].second = dp[i-1].second + 1;
                dp[i].first = 1;
                plus++;
                isChangeFirst = true;
            } else if (dp[i-1].second == 1 && !isChangeSecond) {
                dp[i].first = dp[i-1].first + 1;
                dp[i].second = 1;
                plus++;
                isChangeSecond = true;
            } else {
                if (plus % 2 == 0) {
                    dp[i].first = dp[i-1].first - 1;
                    dp[i].second = dp[i-1].second + 1;
                } else {
                    dp[i].first = dp[i-1].first + 1;
                    dp[i].second = dp[i-1].second - 1;
                }
                isChangeFirst = isChangeSecond = false;
            }
        }
    }

    cout << dp[X].first << "/" << dp[X].second << endl;
    return 0;
}
