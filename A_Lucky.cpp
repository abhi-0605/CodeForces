#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;
        int start=0;
        int end=0;
        for(int i=0;i<3;i++){
            start+=(str[i]-'0');
            end+=(str[5-i]-'0');
        }

        if(start==end){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}