#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long k;
    cin>>k;

    long long ans=LLONG_MIN;  

    for(int i=0;i<n;i++){
        long long f,t;
        cin>>f>>t;

        long long temp;
        if(t<=k){
            temp=f;
        }else{
            temp=f-(t-k);
        }

        ans=max(ans,temp);  
    }

    cout<<ans<<endl;
}