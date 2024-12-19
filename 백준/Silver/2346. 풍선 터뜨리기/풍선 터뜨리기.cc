#include <iostream>
#include <deque>
#include <utility>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    deque<pair<int,int>> dq;
    for(int i=1; i<=N; i++){
        int num;
        cin >> num;
        dq.push_back({i, num});
    }

    while(!dq.empty()){
        cout << dq.front().first << " ";
        int loop = dq.front().second;
        dq.pop_front();

        if(dq.empty()) break;

        if(loop > 0){
            for(int i=0; i<loop-1; i++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {
            for(int i=0; i<-loop; i++){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    return 0;
}