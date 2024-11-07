#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    vector<int> tall;
    int sum = 0;
    int erase1, erase2;
    int x;

    for(int i=0; i<9; i++){
        cin >> x;
        tall.push_back(x);
        sum += x;
    }

    bool isres = false;
    for(int i=0; i<9; i++){
        for(int j=i+1; j<9; j++){
            int res = sum;
            if(i != j){
                res -= tall[i] + tall[j];
                if(res == 100){
                    erase1 = tall[i];
                    erase2 = tall[j];
                    isres = true;
                    break;
                }
            }
        }
        if(isres) break;
    }

    sort(tall.begin(),tall.end());
    for(int i=0; i<tall.size(); i++){
        if(tall[i] != erase1 && tall[i] != erase2){
            cout << tall[i] << "\n";
        }
    }
    return 0;
}