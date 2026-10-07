#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=1;i<n-1;i++){
            if(arr[i]==-1){
                arr[i]=0;
            }
        }

        if(arr[0]==-1 && arr[n-1]==-1){
            arr[0]=arr[n-1]=0;
        }else if(arr[0]==-1){
            arr[0]=arr[n-1];
        }else if(arr[n-1]==-1){
            arr[n-1]=arr[0];
        }

        int ans=0;
        ans=abs(arr[0]-arr[n-1]);

        cout<<ans<<endl;

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}