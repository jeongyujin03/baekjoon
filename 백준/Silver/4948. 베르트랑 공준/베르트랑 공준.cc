#include <iostream>
#include <vector>
#define SIZE 123456
using namespace std;

vector<int> arr(2*SIZE + 1);
int getDecNum(int n){
    int sum = 0;
    for(int i=n+1; i<=2*n; i++){
        if(!arr[i]) sum++;
    }
    return sum;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    arr[0] = arr[1] = 1;
    for(int i=2; i*i<=2*SIZE; i++){
        for(int j=i+i; j<=2*SIZE; j+=i){
            arr[j] = 1;
        }
    }

    int n;
    cin >> n;
    while(n!=0){
        cout << getDecNum(n) << "\n";
        cin >> n;
    }
    return 0;
}