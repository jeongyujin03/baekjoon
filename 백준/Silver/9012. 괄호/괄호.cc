#include <iostream>
#include <vector>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    vector<string> v(N);

    for(int i=0; i<N; i++){
        cin >> v[i];
    }

    for(int i=0; i<N; i++){
        string str = v[i];
        int size = str.size();
        int cnt = 0;
        bool res = true;

        for(int j=0; j<size; j++){
            if(str[j] == '('){
                cnt++;
            }
            else if(str[j] == ')'){
                cnt--;
            }

            if(cnt < 0){
                res = false;
                break;
            }
        }
        if(cnt != 0){
            res = false;
        }

        if(res) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}