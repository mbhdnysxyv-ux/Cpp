#include<iostream>
using namespace std;
int t,f,sum,s,n;
int a[10010];
int main(){
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        for(int j=1;j<=n;j++){
            cin>>a[j];
            sum+=a[j];
        }
        for(int j=1;j<n;j++){
            s+=a[j];
            if(s*2==sum){
                f=1;
                break;
            }
        }
        if(f==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        f=0;
        s=0;
        sum=0;
    }
    return 0;
}