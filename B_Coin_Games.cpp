#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string str;
        cin>>str;

        int up=count(str.begin(),str.end(),'U');

        if(up%2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}