#include <iostream>
using namespace std;

long long int combination(int N, int M){
    int McomN = 1, Ncom = 1, n = 1;
    for(int i=M-N+1; i<=M; i++){
        McomN *= i;
        
        while(n <= N){
            Ncom *= n;
            n++;
            if(McomN % Ncom == 0){
                McomN /= Ncom;
                Ncom = 1;
                break;
            }
            else break;
        }
    }
    
    return McomN;
}
int main(void){
    int T, N, M;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> N >> M;
        cout << combination(N, M) << endl;
    }
    return 0;
}