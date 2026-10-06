#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a<b){
            cout<<b-a<<endl;
        }else if(a%2 == b%2){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
        }
    }
}