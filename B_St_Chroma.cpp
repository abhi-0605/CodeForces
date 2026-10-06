#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int>ans;

        if(x==0){
            for(int i=1;i<n;i++){
                ans.push_back(i);
            }
            ans.push_back(0);
        }else if(x==n){
            for(int i=0;i<n;i++){
                ans.push_back(i);
            }
        }else{
            for(int i=0;i<x;i++){
                ans.push_back(i);
            }
            for(int i=x+1;i<n;i++){
                    ans.push_back(i);
            }
            ans.push_back(x);
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]<<(i+1==n?"\n":" ");
        }
    }
}