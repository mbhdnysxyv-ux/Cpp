#include<iostream>
using namespace std;
long long a;
string s;
int main(){
    cin>>s;
    for(char c:s){
        a=a*2+(c-'0');
    }
    cout<<a;
    return 0;
}