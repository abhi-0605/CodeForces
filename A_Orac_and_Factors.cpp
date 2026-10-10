#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;

        long long ans=n;
        for(long long i=2;i*i<=n;i++){
            if(n%i==0){
                ans=i;
                break;
            }
        }

        cout<<n+ans+(k-1)*2<<endl;
    }
}