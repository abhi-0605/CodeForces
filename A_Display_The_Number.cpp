#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string str;
        
        
        if(n%2==1){
            str+='7';
            n-=3;
        }
        str+=string(n/2,'1');
        cout<<str<<endl;
    }

    return 0;
}