#include <iostream>
#include <stack>
using namespace std;

int main(void){
    int N;
    cin >> N;

    int cur = 1;
    stack<int> line;
    while(N--){
        int n;
        cin >> n;

        if(n == cur){
            cur++;
        } else{
            line.push(n);
        }

        while(!line.empty() && line.top() == cur){
            line.pop();
            cur++;
        }
    }

    if(line.empty()) cout << "Nice";
    else cout << "Sad";
    return 0;
}