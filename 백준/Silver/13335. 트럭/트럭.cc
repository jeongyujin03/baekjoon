#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, w, L;
    cin >> n >> w >> L;

    queue<int> truck; //대기 트럭 무게
    queue<pair<int, int>> bridge; //다리 위 상태 (무게, 나가는 시간)
    int time = 0, curWeight = 0;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        truck.push(t);
    }

    while (!truck.empty() || !bridge.empty()) {
        time++;
        //다리 위 트럭 이동 및 제거
        //나갈 시간과 현재 시간이 일치한다면 해당 트럭 제거
        if (!bridge.empty() && bridge.front().second == time) {
            curWeight -= bridge.front().first; //다리에서 나가면 무게 줄임
            bridge.pop();
        }

        //새로운 트럭 다리에 올리기
        if (!truck.empty() && curWeight + truck.front() <= L && bridge.size() < w) {
            curWeight += truck.front();
            bridge.push({truck.front(), time + w}); //현재 시간 + 다리 길이만큼 걸림
            //나갈 시간을 맞추어서 second에 추가해놓음. 추가한다면 time이 흐르고, 나갈 시간에 따라 빠져나가도록 함
            truck.pop();
        }
    }
    cout << time;
    return 0;
}
