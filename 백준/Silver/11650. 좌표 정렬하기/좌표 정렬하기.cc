#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, X, Y;
    cin >> N;
    vector<pair<int, int>> dot;

    for(int x=0; x<N; x++){
        cin >> X >> Y;
        dot.push_back({X,Y});
    }

    sort(dot.begin(), dot.end());

    for(int x=0; x<N; x++){
        cout << dot[x].first << " " << dot[x].second << '\n';
    }
    return 0;
}