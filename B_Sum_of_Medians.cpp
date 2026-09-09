#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int size=n*k;
        vector<long long> arr(size);
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }

        int median=(n+1)/2;
        int next=n-median;
        int index=size-next-1;
        long long ans=0;
        for(int i=0;i<k;i++){
            
            ans+=arr[index];
            index-=next+1;

        }

        cout<<ans<<endl;

    }

}