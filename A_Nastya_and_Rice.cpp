#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;

        int minimum=n*(a-b);
        int maximum=n*(a+b);

        int min_possible=c-d;
        int max_possible=c+d;

        if(max(min_possible,minimum)<=min(max_possible,maximum)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}