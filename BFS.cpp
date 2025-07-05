/* This is DFS code. made by hykid1189*/

#include<iostream>
#include<queue>

using namespace std;
int map[1001][1001];
bool visited[1001];
int N, M ,V;
queue <int> q;

void BFS(int x){
    q.push(x);
    visited[x] = true;
    while (!q.empty()){
        int n=q.front();
        q.pop();
        cout << n;
        for(int i=1;i<=N;i++){
            if(!visited[i] && map[n][i]==1){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main(){
    cin >> N >> M >> V;
    for(int i=1; i <= M;i++){
        int s,e;
        cin >> s >> e;
        map[s][e] = 1;
        map[e][s] = 1;
    }

    BFS(V);
    return 0;
}
