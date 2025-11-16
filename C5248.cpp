#include<iostream>
#include<iomanip>
using namespace std;
int n,r,cnt;
int a[31];//存答案
bool vis[31];//标记是否使用
void dfs(int k){//k 层数
    for(int i=1;i<=n;i++){//遍历
        if(vis[i]==0&&i>a[k-1]){//未标记，可使用
            a[k]=i;//存结果
            vis[i]=1;//已使用
            if(k==r){//到最后，走了™
                for(int j=1;j<=r;j++) cout<<setw(3)<<a[j]<<" ";
                cout<<endl;
                cnt++;
            }
            else{
                dfs(k+1);
            } 
            vis[i]=0;
        }
    }
}
int main(){
    cin>>n>>r;
    dfs(1);
    cout<<"number = "<<cnt;
    return 0;
}