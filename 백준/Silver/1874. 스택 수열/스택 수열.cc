#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(void){
    int n, x;
    cin >> n;
    stack<int> s;
    vector<char> v;
    int cnt = 1;

    for(int i=0; i<n; i++){
        cin >> x;
        while(cnt <= x){
            s.push(cnt);
            v.push_back('+');
            cnt++;
        }

        if(s.top() == x){
            s.pop();
            v.push_back('-');
        }
        else{
            cout << "NO";
            return 0;
        }
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i] << "\n";
    }
    return 0;
}