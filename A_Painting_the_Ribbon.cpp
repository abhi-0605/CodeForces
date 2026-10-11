#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,k,m;
        cin>>n>>k>>m;

        
        if(k>1 && n-(n+k-1)/k>m){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}