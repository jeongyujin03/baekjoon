#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int A[50];
    int sortA[50];
    int P[50];

    for(int i=0; i<N; i++){
        cin >> A[i];
        sortA[i] = A[i];
    }
    sort(sortA, sortA + N);

    for(int i=0; i<N; i++){
        int idx = find(A, A+N, sortA[i]) - A;
        A[idx] = -1;
        P[idx] = i;
    }

    for(int i=0; i<N; i++){
        cout << P[i] << " ";
    }
    return 0;
}