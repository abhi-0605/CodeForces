#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int ans=0;
        for(int i=1;i<=n;i<<=1){
            int num=min(k,n/i);
            ans+=num;
            n-=(num*i);
            if(num<k) break;

        }

        cout<<ans<<endl;
    }
}