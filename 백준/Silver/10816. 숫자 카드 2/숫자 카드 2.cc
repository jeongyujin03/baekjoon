#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lower_bound(vector<int>& v, int target);
int upper_bound(vector<int>& v, int target);

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, X;
    vector<int> card;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> X;
        card.push_back(X);
    }
    sort(card.begin(), card.end());

    cin >> M;
    for(int i=0; i<M; i++){
        cin >> X;
        cout << upper_bound(card, X) - lower_bound(card, X) << " ";
    }
    return 0;
}

int lower_bound(vector<int>& v, int target){
    int low = 0;
    int high = v.size()- 1;
    int mid;
    while(low <= high){
        mid = (low + high)/2;
        if(v[mid] < target){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return low;
}

int upper_bound(vector<int>& v, int target){
    int low = 0;
    int high = v.size()- 1;
    int mid;
    while(low <= high){
        mid = (low + high)/2;
        if(v[mid] <= target){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return low;
}