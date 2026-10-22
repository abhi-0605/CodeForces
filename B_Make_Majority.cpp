#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;


    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        bool flag=1;

        if(s.front()=='1' && s.back()=='1'){
            flag=0;
        }

        int ele=0;

        for(int i=0;i+1<n;i++){
            if(s[i]=='1' && s[i+1]=='1'){
                ele++;
            }
        }

        if(ele>=2){
            flag=0;
        }

        if(s.find("111")!=string::npos){
            flag=0;
        }

        if((s.front()=='1' || s.back()=='1') && s.find("11")!=string::npos){
            flag=0;
        }

        if(!flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}