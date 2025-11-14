#include<iostream>
using namespace std;
bool cmp(int a,int b){
    if(a>=b) return true;
    else return false;
}
int a[20];
int main(){
    for(int i=1;i<=10;i++){
        cin>>a[i];
    }
    sort(a+1,a+10+1,cmp);
    for(int i=1;i<=10;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}