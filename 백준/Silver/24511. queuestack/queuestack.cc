#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    vector<int> type(N);
    vector<int> v(N);
    deque<int> dq;
    for(int i=0; i<N; i++){
        cin >> type[i];
    }

    for(int i=0; i<N; i++){
        int n;
        cin >> n;
        if(!type[i]){
            dq.push_back(n);
        }
    }

    int M;
    cin >> M;
    for(int i=0; i<M; i++){ 
        int C;
        cin >> C;
        dq.push_front(C);
        cout << dq.back() << " ";
        dq.pop_back();
    }
    return 0;
}