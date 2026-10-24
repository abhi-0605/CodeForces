#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string a,b;
        long long p1,p2;

        cin>>a>>p1>>b>>p2;

        long long len1=a.size()+p1;
        long long len2=b.size()+p2;

        if(len1!=len2){
            cout<<(len1<len2?"<":">")<<endl;
            continue;
        }

        while(a.size()<b.size()) a+='0';
        while(b.size()<a.size()) b+='0';

        if(a==b) cout<<"="<<endl;
        else cout<<(a<b?"<":">")<<endl;

    }
    return 0;
}