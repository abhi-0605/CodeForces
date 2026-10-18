#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;

        int n=str.size();

        int pre=0;
        int ans=0;
        for(int i=1;i<=n;i++){
            if(str[i-1]=='R'){
                ans=max(ans,i-pre);
                pre=i;
            }
        }

        ans=max(ans,n+1-pre);
        cout<<ans<<endl;

    }
}