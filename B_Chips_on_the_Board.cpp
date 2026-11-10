#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long suma=0;
        long long sumb=0;

        vector<long long>a(n),b(n);
        for(auto &it:a) cin>>it;
        for(auto &it:b) cin>>it;

        for(int i=0;i<n;i++){
            suma+=a[i];
            sumb+=b[i];
        }

        long long minia= *min_element(a.begin(),a.end());
        long long minib= *min_element(b.begin(),b.end());

        long long ans=min(suma+n*minib,sumb+n*minia);

        cout<<ans<<endl;
    }
}