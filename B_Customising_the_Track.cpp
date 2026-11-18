#include<bits/stdc++.h>
using namespace std;    

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,sum=0;
        
        cin>>n;
        for(int i=0;i<n;i++){
            long long a;
            cin>>a;
            sum+=a;
        }
        long long ans=sum%n;
        cout<<ans*(n-ans)<<endl;
    }
}