#include <iostream>
#include <queue>
using namespace std;

int main(void){
    int n, w, L;
    queue<int> truck, bridge;
    cin >> n >> w >> L;

    for(int i=0; i<n; i++){
        int t;
        cin >> t;
        truck.push(t);
    }

    int sumWeight = 0, cnt = 0;
    while(!truck.empty()){
        if(bridge.size() == w){
            sumWeight -= bridge.front();
            bridge.pop();
        }

        if(sumWeight + truck.front() <= L){
            bridge.push(truck.front());
            sumWeight += bridge.back();
            truck.pop();
        } else{
            bridge.push(0);
        }
        cnt++;
    }
    cout << cnt + w; 
    return 0;
}