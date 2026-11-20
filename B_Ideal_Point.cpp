#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool left=false,right=false;
        for(int i=0;i<n;i++){
            int l,r;
            cin>>l>>r;
            if(l<=k && k<=r){
                if(l==k ) left=true;
                if(r==k ) right=true;
            }
        }

        if(left && right){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}