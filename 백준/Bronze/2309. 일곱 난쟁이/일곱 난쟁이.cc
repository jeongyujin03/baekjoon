#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int tall[9];
    int sum = 0;
    
    for(int i=0; i<9; i++){
        cin >> tall[i];
        sum += tall[i];
    }

    sort(tall, tall + 9);
    for(int i=0; i<9; i++){
        for(int j=i+1; j<9; j++){
            if(sum - (tall[i] + tall[j]) == 100){
                for(int k=0; k<9; k++){
                    if(k != i && k != j){
                        cout << tall[k] << "\n";
                    }
                }
                return 0;
            }
        }
    }
}