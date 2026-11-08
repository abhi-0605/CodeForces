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

        bool flag=true;

        for(int i=1;i<n;i++){
            if(arr[i-1]<=arr[i]){
                flag=false;
                break;
            }
        }

        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}