#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<int>arr(m);
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    sort(begin(arr),end(arr));
    int ans=INT_MAX;
    for(int i=0;i<=m-n;i++){
        int diff=arr[i+n-1]-arr[i];
        ans=min(ans,diff);
    }

    cout<<ans<<endl;


}