#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int ans=0;
    if(a==b || a==c || a==d){
        ans++;
    }

    if(b==c || b==d){
        if(b!=a){
            ans++;
        }
    }

    if(c==d){
        if(c!=a && c!=b){
            ans++;
        }
    }
    cout<<ans<<endl;
}