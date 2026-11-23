#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        string str;
        cin>>n>>str;

        int p=-1;
        for(int i=0;i<n;i++){
            if(str[i]!='?'){
                p=i;
                break;
            }
        }

        if(p==-1){
            str[0]='R';
            p=0;
        }

        auto flip=[](char c){ return c=='R'?'B':'R'; };
        for(int i=p-1;i>=0;i--){
            str[i]=flip(str[i+1]);
        }

        for(int i=p+1;i<n;i++){
            if(str[i]=='?'){
                str[i]=flip(str[i-1]);
            }
        }

        cout<<str<<endl;
        
    }
}