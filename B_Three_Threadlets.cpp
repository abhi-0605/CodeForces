#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;

        long long g=gcd(a,gcd(b,c));

        long long ans=(a/g-1)+(b/g-1)+(c/g-1);

        if(ans<=3){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}