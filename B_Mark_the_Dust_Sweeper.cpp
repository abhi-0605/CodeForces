#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>arr(n);
        for(auto &it:arr) cin>>it;

        long long ans=0;
        bool flag=false;
        for(int i=0;i<n-1;i++){
            if(arr[i]>0){
                ans+=arr[i];
                flag=true;
            }else if(flag){
                ans+=1;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}