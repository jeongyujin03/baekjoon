#include <iostream>
#include <vector>
#define SIZE 10001
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> selfNum;
    for(int i=1; i<=SIZE; i++){
        bool isAdd = true; //처음에 isAdd를 밖으로 빼서 갱신이 안됐음
        for(int j=1; j<i; j++){
            string str = to_string(j);
            int sum = 0;
            for(int k=0; k<str.length(); k++){
                sum += int(str[k] - '0');
            }
            if((j+sum) == i){
                isAdd = false;
                break;
            }
        }
        if(isAdd){
            selfNum.push_back(i);
        }
    }

    for(int i=0; i<selfNum.size(); i++){
        cout << selfNum[i] << "\n";
    }
    return 0;
}