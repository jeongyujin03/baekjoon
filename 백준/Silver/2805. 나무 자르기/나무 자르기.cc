#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int minLength(vector<int>& v, int size, int minLen){
    int low = 0;
    int high = v[size - 1];
    int mid, cutTree = 0;
    while(low <= high){
        mid = (low+high)/2;
        long long sum = 0;
        
        for(int i=0; i<=size; i++){
            if(v[i] > mid){
                sum += v[i] - mid;
            }
        }

        if(sum == minLen) return mid;
        else if(sum < minLen){
            high = mid - 1;
        }
        else if(sum > minLen){
            cutTree = mid;
            low = mid + 1;
        }
    }
    return cutTree;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, X;
    vector<int> treeLength;

    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> X;
        treeLength.push_back(X);
    }
    sort(treeLength.begin(), treeLength.end());
    cout << minLength(treeLength, treeLength.size(), M);
    return 0;
}