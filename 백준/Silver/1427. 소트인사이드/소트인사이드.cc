#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    string str;
    cin >> str;
    vector<char> v;

    for(int i=0; i<str.length(); i++){
        v.push_back(str[i]);
    }
    sort(v.begin(), v.end(), greater<>());

    for(int i=0; i<str.length(); i++){
        cout << v[i];
    }
    return 0;
}