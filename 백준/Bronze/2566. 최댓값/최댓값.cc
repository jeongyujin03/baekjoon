#include <iostream>
#include <algorithm>
#define SIZE 9
using namespace std;

struct maxArr{
    int _num = 0;
    int _row = 1, _col = 1;
};

int main(void){
    int arr[SIZE][SIZE];
    maxArr m;

    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            cin >> arr[i][j];

            if(m._num < arr[i][j]){
                m._num = arr[i][j];
                m._row = i + 1;
                m._col = j + 1;
            }
        }
    }

    cout << m._num << "\n" << m._row << " " << m._col;
    return 0;
}