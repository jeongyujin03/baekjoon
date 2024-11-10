#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> x(N);
    vector<int> y(N);

    for(int i=0; i<N; i++){
        cin >> x[i] >> y[i];
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    cout << (x[x.size()-1] - x[0]) * (y[y.size()-1] - y[0]);
    return 0;
}