#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;


        int ans=INT_MAX;

        for(int i=0;i<n;i++){
            int d,s;
            cin>>d>>s;

            int l=d+(s-1)/2;
            ans=min(ans,l);
        }

        cout<<ans<<endl;
    }

}