#include<iostream>
using namespace std;
int n,s1;
string l1,l2;
char dh,s2;
int main(){
    cin>>n;
    while(n--){
        cin>>s1>>l1>>dh>>s2>>l2;
        if(l1=="km"&&l2=="mm"||l1=="kg"&&l2=="mg"){
            cout<<s1<<" "<<l1<<" "<<dh<<" "<<s1*1000000<<" "<<l2<<endl;
        }
        else{
            cout<<s1<<" "<<l1<<" "<<dh<<" "<<s1*1000<<" "<<l2<<endl;
        }
        
    }
    return 0;
}