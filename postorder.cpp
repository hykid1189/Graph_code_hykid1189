#include<iostream>
#include<queue>
using namespace std;
int l_child[9]={0,2,4,6,0,8,0,0,0};
int r_child[9]={0,3,5,7,0,0,9,0,0};
int cur = 0;
void postorder(int cur){
    if(cur == 0){
        return;
    }
    postorder(l_child[cur]);
    postorder(r_child[cur]);
    cout << cur;
}
int main(){
    postorder(1);
    return 0;
}
