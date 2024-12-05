#include <iostream>
#include <queue>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    queue<int> q;
    string str;

    while(N--){
        int num;
        cin >> str;
        if(str == "push"){
            cin >> num;
            q.push(num);
        }
        else if(str == "pop"){
            if(q.empty()) cout << -1;
            else{
                cout << q.front();
                q.pop();
            }
            cout << "\n";
        }
        else if(str == "size"){
            cout << q.size() << "\n";
        }
        else if(str == "empty"){
            cout << q.empty() << "\n";
        }
        else if(str == "front"){
            if(q.empty()) cout << -1;
            else cout << q.front();
            cout << "\n";
        }
        else if(str == "back"){
            if(q.empty()) cout << -1;
            else cout << q.back();
            cout << "\n";
        }
    }
    return 0;
}