#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    string N;
    int B;
    cin >> N >> B;

    int sum = 0;
    for(int i=0; i<N.length(); i++){
        int tmp = N.length() - (i + 1);
        if(N[i] >= '0' && N[i] <= '9'){
            //pow는 기본적으로 double형
            sum += (N[i] - '0') * (int)pow(B, tmp);
        }
        else sum += (N[i] - 'A' + 10) * (int)pow(B,tmp);
    }
    cout << sum;
    return 0;
}