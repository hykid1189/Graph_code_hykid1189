/* This is DFS code. made by hykid1189*/

#include<iostream>
#include<stack>

using namespace std;
int map[1001][1001];
bool visited[1001];
int N, M ,V;
stack <int> stk;

void DFS(int x){
    stk.push(x);
    visited[x] = true;
    while (!stk.empty()){
        int n=stk.top();
        stk.pop();
        cout << n;
        for(int i=1;i<=N;i++){
            if(!visited[i] && map[n][i]==1){
                stk.push(i);
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

    DFS(V);
    return 0;
}
