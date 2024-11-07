#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(void){
    int n, x;
    cin >> n;
    stack<int> s, num;
    vector<char> res;
    for(int i=n; i>=1; i--){
        num.push(i);
    }

    for(int i=0; i<n; i++){
        cin >> x;
        if(s.empty() || s.top() < x){
            s.push(num.top());
            num.pop();
            res.push_back('+');

            while(s.top() != x){
                s.push(num.top());
                res.push_back('+');
                num.pop();
            }
        }

        if(s.top() == x){
            res.push_back('-');
            s.pop();
            continue;
        }

        if(s.top() > x){
            cout << "NO";
            return 0;
        }
    }
    for(int i=0; i<res.size(); i++){
        cout << res[i] << "\n";
    }
    return 0;
}