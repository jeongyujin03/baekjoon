#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(void){
    int T, N, M;
    cin >> T;
    while(T--){
        cin >> N >> M;
        queue<pair<int,int>> q;
        priority_queue<int> printer;
        int import;
        int count = 0;

        for(int i=0; i<N; i++){
            cin >> import;
            q.push({import, i});
            printer.push(import);
        }

        while(!q.empty()){
            int pri = q.front().first;
            int idx = q.front().second;
            q.pop();

            if(printer.top() == pri){
                printer.pop();
                count++;
                if(idx == M){
                    cout << count << "\n";
                    break;
                }
            } else q.push({pri, idx});
        }
    }
    return 0;
}