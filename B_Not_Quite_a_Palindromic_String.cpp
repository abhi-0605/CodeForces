#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        string str;
        cin>>str;

        int ones=0;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
                ones++;
            }
        }
        int zeros=n-ones;

        int b=n/2-k;

        if(b<=min(ones,zeros)&& (zeros-b)%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}