#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        string str;
        cin>>str;

        for(int i=0;i<n-k;i++){
            if(str[i]=='1'){
                
                    str[i]='0';
                
                if(str[i+k]=='1'){
                    str[i+k]='0';
                }else{
                    str[i+k]='1';
                }
            }
        }

        bool flag=0;
        for(int i:str){
            if(i=='1'){
                flag=1;
            }
        }

        if(flag){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}
