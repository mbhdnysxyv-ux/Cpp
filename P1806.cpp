#include<iostream>
using namespace std;
int n,cnt;
int a[30];
bool b[30];
bool prime(int x,int y){
    int sum=x+y;
    for(int i=2;i*i<=sum;i++){
        if(sum%i==0) return false;
    }
    return true;
}
void dfs(int k){
    if(k==1){
    a[1]=1;
    b[1]=1;
    dfs(2);
    return;
}
    for(int i=2;i<=n;i++){
        if(b[i]==0 && prime(i,a[k-1])==1){
            a[k]=i;
            b[i]=1;
            if(k==n && prime(a[n],a[1])==1){
                cnt++;
                for(int j=1;j<=n;j++){
                    cout<<a[j]<<' ';
                }
                cout<<endl;
            }
            else dfs(k+1);
            b[i]=0;
        }
    }
}
int main(){
    cin>>n;
    if(n<1 || n>20) {
        cout<<"No Solution";
        return 0;
    }
    dfs(1);
    if(cnt==0) cout<<"No Solution";
    return 0;
}