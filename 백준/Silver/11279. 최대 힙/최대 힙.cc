#include <iostream>
#include <queue>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    long long int x;
    priority_queue<int> pq;

    cin >> N;
    while(N--){
        cin >> x;
        if(x){
            pq.push(x);
        } else {
            if(pq.empty()){
                cout << 0;
            } else{
                cout << pq.top();
                pq.pop();
            }
            cout << "\n";
        }
    }
    return 0;
}