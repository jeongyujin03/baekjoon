#include <iostream>
#include <queue>
#include <utility>
#include <cmath>
using namespace std;

struct Compare
{
    bool operator()(pair<int, int> p1, pair<int,int> p2){
    if(p1.first == p2.first){
        return p1.second > p2.second;
    }
    return p1.first > p2.first;
}
};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie();
    cout.tie();

    int N;
    long long int x;
    priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> pq;

    cin >> N;
    while(N--){
        cin >> x;
        if(x){
            pq.push({abs(x), x});
        } else{
            if(pq.empty()){
                cout << 0;
            } else {
                cout << pq.top().second;
                pq.pop();
            }
            cout << "\n";
        }
    }
    return 0;
}