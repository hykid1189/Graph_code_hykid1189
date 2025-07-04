#include<iostream>
#include<queue>
using namespace std;
int l_child[9]={0,2,4,6,0,8,0,0,0};
int r_child[9]={0,3,5,7,0,0,9,0,0};
int cur = 0;
void inorder(int cur){
    if(cur == 0){
        return;
    }
    inorder(l_child[cur]);
    cout << cur;
    inorder(r_child[cur]);
}
int main(){
    inorder(1);
    return 0;
}
