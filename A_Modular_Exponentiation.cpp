#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll n,m;
    cin>>n>>m;

    

    if(n>27){
        cout<<m<<endl;
        
    }else{
        cout<<m%(1LL<<n)<<endl;
    }
}