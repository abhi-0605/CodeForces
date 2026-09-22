#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<long long>arr(n);
    for(auto &i:arr){
        cin>>i;
    }
    sort(arr.begin(),arr.end());

    vector<long long>prefix(n+1,0);
    for(int i=0;i<n;i++){
        prefix[i+1]=prefix[i]+arr[i];
    }
    while(k--){
        int x,y;
        cin>>x>>y;
        int lp=n-x;
        int rp=lp+y;
        long long ans=prefix[rp]-prefix[lp];
        cout<<ans<<endl;
    }
}