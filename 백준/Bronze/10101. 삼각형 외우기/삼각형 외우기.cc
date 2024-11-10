#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int tri[3];
    int sum = 0;
    for(int i=0; i<3; i++){
        cin >> tri[i];
        sum += tri[i];
    }

    if(sum != 180) cout << "Error";
    else{
        sort(tri, tri+3);
        if(tri[0] == tri[2]) cout << "Equilateral";
        else if(tri[0] == tri[1] || tri[1] == tri[2]) cout << "Isosceles";
        else cout << "Scalene";
    }
    return 0;
}