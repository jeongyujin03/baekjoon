#include <iostream>
#include <deque>
using namespace std;

int main(void){
    int N;
    deque<int> card;

    cin >> N;
    for(int i=1; i<=N; i++){
        card.push_back(i);
    }

    while(card.size() > 1){
        card.pop_front();

        int front = card.front();
        card.pop_front();
        card.push_back(front);
    }

    cout << card.front();
    return 0;
}