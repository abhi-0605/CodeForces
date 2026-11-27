#include <bits/stdc++.h>    
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        string str;
        cin>>str;

        string rev=str;
        reverse(rev.begin(), rev.end());

        if(str<rev){
            cout<<"YES"<<endl;
        }else if(k==0){
            cout<<"NO"<<endl;
        }else{
            bool flag=false;
            for(char c:str){
                if(c!=str[0]){
                    flag=true;
                    break;
                }
            }
            cout<<(flag?"YES":"NO")<<endl;
        }
    }
    return 0;
}