#include <iostream>
#include <queue>
#include <set>
#include <deque>
using namespace std;

int main(void) {
    int N, K, L;
    cin >> N >> K;

    // 사과 위치 저장 (set을 사용해 O(1)로 확인)
    set<pair<int, int>> apple;
    for (int i = 0; i < K; i++) {
        int x, y;
        cin >> x >> y;
        apple.insert({x, y});
    }

    // 방향 변경 정보 저장
    queue<pair<int, char>> directions;
    cin >> L;
    for (int i = 0; i < L; i++) {
        int X;
        char C;
        cin >> X >> C;
        directions.push({X, C});
    }

    // 뱀 초기 상태
    deque<pair<int, int>> snake; // 뱀의 몸체 관리
    snake.push_back({1, 1});
    int time = 0;

    // 방향 (우, 하, 좌, 상)
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int curDir = 0; // 현재 방향 (우)

    while (true) {
        // 시간 증가
        time++;

        // 뱀의 머리 위치 계산
        int nextX = snake.back().first + dx[curDir];
        int nextY = snake.back().second + dy[curDir];

        // 벽 충돌 검사
        if (nextX < 1 || nextX > N || nextY < 1 || nextY > N) {
            cout << time << endl;
            break;
        }

        // 자기 자신과 충돌 검사
        for (const auto& s : snake) {
            if (s.first == nextX && s.second == nextY) {
                cout << time << endl;
                return 0;
            }
        }

        // 머리 이동
        snake.push_back({nextX, nextY});

        // 사과 확인
        if (apple.count({nextX, nextY})) {
            apple.erase({nextX, nextY}); // 사과를 먹으면 제거
        } else {
            snake.pop_front(); // 사과가 없으면 꼬리를 줄임
        }

        // 방향 변경 확인
        if (!directions.empty() && directions.front().first == time) {
            if (directions.front().second == 'D') {
                curDir = (curDir + 1) % 4; // 시계 방향으로 90도 회전
            } else if (directions.front().second == 'L') {
                curDir = (curDir + 3) % 4; // 반시계 방향으로 90도 회전
            }
            directions.pop();
        }
    }
    return 0;
}
