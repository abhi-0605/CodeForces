#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        bool flag=false;
        int ans=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i==0){
                ans=x%2;
            }else if(x%2!=ans){
                flag=true;
            }
        }

        if(flag){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
}