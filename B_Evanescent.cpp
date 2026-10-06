#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string str;
        cin>>str;

        int len=1;
        int ans=INT_MAX;
        for(int i=1;i<n;i++){
            if(str[i]!=str[i-1]){
                len++;
            }
            
        }


        for(int i=1;i<n-1;i++){
            int temp=len;

            if(str[i]!=str[i-1]){
                temp--;
            }
            if(str[i]!=str[i+1]){
                temp--;
            }

            if(str[i-1]!=str[i+1]){
                temp++;
            }

            ans=min(ans,temp);
        }

        cout<<ans<<endl;
    }
}