#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long k;
        cin>>k;

        vector<pair<long long,int>>arr(n);
        vector<long long>temp(n),ans(n);

        for(int i=0;i<n;i++){
            cin>>arr[i].first;
            arr[i].second=i;
        }
        for(int i=0;i<n;i++){
            cin>>temp[i];
        }
        sort(arr.begin(),arr.end());
        sort(temp.begin(),temp.end());

        for(int i=0;i<n;i++){
            ans[arr[i].second]=temp[i];
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]<<(i+1==n?"\n":" ");
        }

    }
}