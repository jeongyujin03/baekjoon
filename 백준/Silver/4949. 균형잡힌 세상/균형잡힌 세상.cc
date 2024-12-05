#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    getline(cin, str);

    while(str != "."){
        string ans = "yes";
        vector<char> v;

        for(int i=0; i<str.length(); i++){
            if(str[i] == '(' || str[i] == '['){
                v.push_back(str[i]);
            }
            else if(str[i] == ')'){
                if(!v.empty() && v.back() == '('){
                    v.pop_back();
                }
                else{
                    ans = "no";
                    break;
                }
            }
            else if(str[i] == ']'){
                if(!v.empty() && v.back() == '['){
                    v.pop_back();
                }
                else{
                    ans = "no";
                    break;
                }
            }
        }
        if(!v.empty()) ans = "no";
        cout << ans << "\n";
        getline(cin, str);
    }
    return 0;
}