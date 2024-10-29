#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    int P[N];

    for(int i=0; i<N; i++){
        cin >> P[i];
    }
    sort(P, P+N);

    int sum = 0, res = 0;
    for(int i=0; i<N; i++){
        sum += P[i];
        res += sum;
    }
    cout << res;
    return 0;
}