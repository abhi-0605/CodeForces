#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        int ans=0;


        // for(int i=1;i<n;i++){
        //     if(n-i>i){
        //         ans++;
        //     }
        // }

        ans=(n-1)/2;

        cout<<ans<<endl;
    }
}