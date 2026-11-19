#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long x=a*d,y=b*c;
        if(x==y){
            cout<<0<<endl;
        }else if(a==0 || c==0){
            cout<<1<<endl;
        }else{
            if(x<y){
                swap(x,y);
            }
            cout<<(x%y==0?"1":"2")<<endl;
        }
    }
}