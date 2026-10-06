#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(begin(arr),end(arr));

        int ans=0;
        int count=0;
        for(int i=0;i<n-1;i++){
            if(abs(arr[i+1]-arr[i])<=k){
                count++;
            }else{
                count=0;
            }
            ans=max(ans,count);
        }

        cout<<n-(ans+1)<<endl;
    }
}