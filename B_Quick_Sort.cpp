#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        int temp=1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==temp) temp++;
        }

        int ans=n-(temp-1);
        cout<<(ans+k-1)/k<<endl;
    }
}