#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;

        if(a==0 && b==0){
            cout<<0<<endl;
            continue;
        }

        long long g=gcd(a,b);
        if(a/g<=c && b/g<=c){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
    }
}