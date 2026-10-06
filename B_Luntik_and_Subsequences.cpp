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

        int ones=0;
        int zeros=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                ones++;
            }else if(arr[i]==0){
                zeros++;
            }
        }

        long long ans=ones*pow(2,zeros);
        cout<<ans<<endl;


    }
    return 0;
}