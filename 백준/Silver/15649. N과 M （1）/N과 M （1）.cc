#include <iostream>
#include <vector>
#define MAX 9
using namespace std;

int N, M;
bool visited[MAX] = {0,};
int arr[MAX] = {0,};

void DFS(int cnt){
    if(cnt == M){
        for(int i=0; i<M; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    else{
        for(int i=1; i<=N; i++){
            if(!visited[i]){
                visited[i] = true;
                arr[cnt] = i;
                DFS(cnt+1);
                visited[i] = false;
            }
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    DFS(0);
    return 0;
}