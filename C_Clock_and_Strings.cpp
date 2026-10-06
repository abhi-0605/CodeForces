#include<bits/stdc++.h>
using namespace std;

bool distance(int x,int a,int b){
    if(a<b){
        return a<x && x<b;
    }else{
        return b<x && x<a;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(distance(c,a,b)!=distance(d,a,b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}