#include <iostream>
#define SIZE 10001
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    bool check[SIZE] = {0};
    for(int i=1; i<SIZE; i++){
        int sum = 0, tmp = i;
        while(tmp!=0){
            sum += tmp % 10;
            tmp /= 10;
        }
        if(sum + i < SIZE){
            check[sum + i] = 1;
        }
    }
    for(int i=1; i<SIZE; i++){
        if(!check[i]){
            cout << i << '\n';
        }
    }
    return 0;
}