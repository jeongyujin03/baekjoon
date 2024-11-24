#include <iostream>
#include <cmath>
using namespace std;

bool isDec(long long n){
    if(n <= 1) return false;
    int sqrtN = sqrt(n);

    for(long long int i=2; i<=sqrtN; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int t, n;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> n;

        while(!isDec(n)){
            n++;
        }
        cout << n << "\n";
    }
    return 0;
}