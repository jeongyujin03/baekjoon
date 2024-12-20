#include <iostream>
#include <queue>
#include <cmath>
#include <utility>
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

struct Compare
{
    bool operator()(int a, int b){
        if(abs(a) == abs(b)){
            return a > b;
        }
        return abs(a) > abs(b);
    }
};

int main(void){
    FASTIO;
    int N, x;
    priority_queue<int, vector<int>, Compare> pq;

    cin >> N;
    while(N--){
        cin >> x;
        if(x){
            pq.push(x);
        } else {
            if(pq.empty()){
                cout << 0;
            } else {
                cout << pq.top();
                pq.pop();
            }
            cout << "\n";
        }
    }
    return 0;
}