#include<iostream>
using namespace std;
int n;
long long h;
int a[1010];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i]>a[i-1]){
            h+=a[i];
        }
        else{
            a[i]=a[i-1]+1;
            h+=a[i];
        }
    }
    cout<<h;
    return 0;
}