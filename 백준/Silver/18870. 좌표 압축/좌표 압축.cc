#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int compare(pair<int,int>& p1, pair<int,int>& p2){
    return p1.second < p2.second;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    vector<pair<int,int>> cor(N);
    for(int i=0; i<N; i++){
        cin >> cor[i].first;
        cor[i].second = i;
    }
    sort(cor.begin(), cor.end());

    int cnt = cor.size() - 1;
    int idx = 1, res = 1;
    int last = cor[0].first;
    cor[0].first = 0;
    while(cnt--){
        if(last < cor[idx].first){
            last = cor[idx].first;
            cor[idx].first = res;
            res++;
        }
        else{
            cor[idx].first = cor[idx-1].first;
        }
        idx++;
    }

    sort(cor.begin(), cor.end(), compare);
    for(int i=0; i<N; i++){
        cout << cor[i].first << " ";
    }
    return 0;
}