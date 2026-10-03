#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        long long sum=0;
        long long ans=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }

        cout<<sum-2*arr[n-2]<<endl;

    }
}