#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
        int n,b,d;
        cin>>n>>b>>d;

        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int ans=0;
        int sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=b){
                sum+=arr[i];
                if(sum>d){
                    ans++;
                    sum=0;
                }
            }
        }
        cout<<ans<<endl;
    return 0;
}