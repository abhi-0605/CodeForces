#include<bits/stdc++.h>
using namespace std;

long long beauty(vector<long long>arr, long long x){
    long long ans=0;
    for(auto it:arr){
        ans+= ceil((double)it/x);
    }
    return ans;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,x;
        cin>>n>>x;

        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        long long maximum=beauty(arr,x);

        long long sum=0;
        for(auto it:arr){
            sum+=it;
        }
        long long minimum=(sum+x-1)/x;
        cout<<minimum<<" "<<maximum<<endl;
    }
    return 0;
}