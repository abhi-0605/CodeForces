#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        if(n%2==0){
            cout<<2<<" "<<n-3<<" "<<1<<endl;
        }else{
            long long a=(n-1)/2;
            if(n%4==1){
                cout<<a-1<<" "<<a+1<<" "<<1<<endl;
            }else{
                cout<<a-2<<" "<<a+2<<" "<<1<<endl;
            }
        }
    }
}