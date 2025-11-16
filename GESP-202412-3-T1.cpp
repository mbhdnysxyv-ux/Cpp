#include<iostream>
using namespace std;
int n,k;
int minn=1000000;
int maxx=-1000000;
int a[100010];
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>=maxx){
            maxx=a[i];
        }
        if(a[i]<=minn){
            minn=a[i];
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]>k){
            a[i]=maxx;
            cout<<a[i]<<" ";
        }
        else if(a[i]<k){
            a[i]=minn;
            cout<<a[i]<<" ";
        }
        else if(a[i]==k) cout<<a[i]<<" ";
    }
    return 0;
}