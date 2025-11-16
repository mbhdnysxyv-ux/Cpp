#include<iostream>
using namespace std;
int a[30];
bool vis[30];
int n;
void dfs(int x,int k,int last){
    if(x==0&&a[0]!=n){
        cout<<n<<"="<<a[0];
        for(int j=1;j<k;j++){
            cout<<"+"<<a[j];
        }
        cout<<endl;
    }
    for(int i=last;i<=x;i++){
        a[k]=i;
        dfs(x-i,k+1,i);
    }
}
int main(){
    cin>>n;
    dfs(n,0,1);
    return 0;
}