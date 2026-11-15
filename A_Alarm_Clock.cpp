#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a<=b){
            cout<<b<<endl;
        }else if(c<=d){
            cout<<-1<<endl;
        }else{
            long long x=a-b;
            long long y=c-d;

            long long cy=(x+y-1)/y;
            

            cout<<b+cy*c<<endl;
        }
    }
}