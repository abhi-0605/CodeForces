#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int k=(n+1)/2;
        cout<<k<<endl;
        for(int i=1;i<=k;i++){
            cout<<3*i-2<<" "<<3*(n-i+1)-1<<endl;
        }
    }
    return 0;
}