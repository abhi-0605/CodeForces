#include<bits/stdc++.h>
using namespace std;

long long fun(long long x,long long a){
    return (x/a)+x%a;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        long long l,r,a;
        cin>>l>>r>>a;

        long long ans=fun(r,a);

        long long temp=((r+1)/a)*a-1;
        if(temp>=l ){
            ans=max(ans,fun(temp,a));
        }

        cout<<ans<<endl;
    }
}