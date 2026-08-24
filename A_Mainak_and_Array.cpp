#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int maximum=arr[n-1];
        int minimum=arr[0];
        int ans=0;

        for(int i=0;i<n;i++){
            minimum=min(minimum,arr[i]);
            ans=max(ans,arr[n-1]-minimum);
        }

        for(int i=n-1;i>=0;i--){
            maximum=max(maximum,arr[i]);
            ans=max(ans,maximum-arr[0]);
        }

        for(int i=0;i<n-1;i++){
            ans=max(ans,arr[i]-arr[i+1]);
        }
        cout<<ans<<endl;


        
    }
}