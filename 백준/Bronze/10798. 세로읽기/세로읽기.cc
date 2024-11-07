#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<string> words(5);
    vector<char> v;
    int maxIdx = 0;
    for(int i=0; i<5; i++){
        cin >> words[i];
        maxIdx = max(int(words[i].size()), maxIdx);
    }

    for(int i=0; i<5; i++){
        while(int(words[i].size()) < maxIdx){
            words[i].push_back(' ');
        }
    }

    for(int i=0; i<maxIdx; i++){
        for(int j=0; j<5; j++){
            char c = words[j].at(i);
            if(c != ' '){
                v.push_back(c);
            }
        }
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i];
    }
    return 0;
}