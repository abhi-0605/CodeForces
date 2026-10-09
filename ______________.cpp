#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        vector<int>arr(n);
        long long sum=0;
        int ones=0;


        for(int i=0;i<n;i++){
            long long a;
            cin>>a;
            arr[i]=a;
            sum+=arr[i];
            if(arr[i]==1){
                ones++;
            }
        }


        if(n>1 && sum>=(long long)n+ones){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}