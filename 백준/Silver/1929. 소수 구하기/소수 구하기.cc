#include <iostream>
#define SIZE 1000001
using namespace std;

int main(void){
    int M, N;
    cin >> M >> N;
    int arr[SIZE] = {0, };
    arr[0] = arr[1] = 1;
    for(int i=2; i*i<=N; i++){
        if(arr[i]) continue;
        for(int j=i*2; j<=N; j+=i){
            arr[j] = 1;
        }
    }

    for(int i=M; i<=N; i++){
        if(!arr[i]) cout << i << endl;
    }
    return 0;
}