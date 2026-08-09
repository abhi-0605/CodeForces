#include<bits/stdc++.h>
using namespace std;
string can(string str){
    bool flag=true;

    while(flag){
        flag=false;
        for(int i=0;i<str.size()-1;i++){
            if(str.substr(i,3)=="001"){
                str[i]='1';
                str[i+1]='0';
                str[i+2]='0';
                flag=true;
            }else if(str.substr(i,3)=="110"){
                str[i]='0';
                str[i+1]='1';
                str[i+2]='1';
                flag=true;

            }
        }
    }
    return str;
}


void sol(){
        int n;
        cin>>n;

        string a,b;
        cin>>a>>b;

        if(can(a)==can(b)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
     
}


int main(){
    int t;
    cin>>t;

    while(t--){
        sol();
    }


}