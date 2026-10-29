#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<long long>arr(n+2), pref(n+2,0), suff(n+2,0);

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    for(int i=2;i<=n;i++){
        pref[i]=pref[i-1]+max(0LL,arr[i-1]-arr[i]);
    }

    for(int i=n-1;i>=1;i--){
        suff[i]=suff[i+1]+max(0LL,arr[i+1]-arr[i]);
    }

    while(m--){
        int a,b;
        cin>>a>>b;

        if(a<b){
            cout<<pref[b]-pref[a]<<endl;
        }else{
            cout<<suff[b]-suff[a]<<endl;
        }
    }
}