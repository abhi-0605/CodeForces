#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        long long px=0,py=0,p=0;
        for(int i=0;i<a;i++){
            long long x,y;
            cin>>x>>y;
            long long d=x-px;
            p+=d;
            if((d%2)!=(llabs(y-py)%2)){
                p--;
            }
            px=x;
            py=y;
        }
        cout<<p+(b-px)<<endl;
    }
}