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

        long long maximum=0;
        for(int i=0;i<n;i++){
            maximum=max(maximum,(long long)arr[i]);
        }

        int ans=-1;

        for(int i=0;i<n;i++){
            if(arr[i]!=maximum){
                continue;
            }
            if(i>0 && arr[i-1]<arr[i]){
                ans=i+1;
                break;
            }

            if(i+1<n && arr[i+1]<arr[i]){
                ans=i+1;
                break;
            }
        }

        cout<<ans<<endl;

    }
}