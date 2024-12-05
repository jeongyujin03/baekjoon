#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N, X, M;
    vector<int> v;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> X;
        v.push_back(X);
    }
    sort(v.begin(), v.end());

    cin >> M;
    for(int i=0; i<M; i++){
        cin >> X;
        cout << upper_bound(v.begin(), v.end(), X)
        - lower_bound(v.begin(), v.end(), X) << " ";
    }
    return 0;
}