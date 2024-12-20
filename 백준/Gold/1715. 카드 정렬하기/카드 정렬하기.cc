#include <iostream>
#include <queue>
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(void){
    FASTIO;
    int N;
    priority_queue<int, vector<int>, greater<int>> pq;

    cin >> N;
    if(N == 1){
        cout << 0;
        return 0;
    }

    while(N--){
        int x;
        cin >> x;
        pq.push(x);
    }

    int res = 0;
    while(!pq.empty()){
        int sum = pq.top();
        pq.pop();
        if(!pq.empty()){
            sum += pq.top();
            pq.pop();
            if(!pq.empty()){
                pq.push(sum);
            }
        }
        res += sum;
    }

    cout << res;
    return 0;
}