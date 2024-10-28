#include <iostream>
#define MAX 1000000000
using namespace std;

int main(void){
    long long X, Y, Z;
    cin >> X >> Y;
    Z = (Y*100)/X;
    if(Z >= 99){
        cout << -1;
        return 0;
    }
    
    long long start = 1, end = MAX, mid;
    while(start <= end){
        mid = (start+end)/2;
        long long prob = ((Y+mid)*100)/(X+mid);
        if(prob <= Z){
            start = mid + 1;
        }
        else end = mid - 1;
    }
    cout << start;
    return 0;
}