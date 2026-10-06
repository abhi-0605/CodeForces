#include<bits/stdc++.h>
using namespace std;

int main(){
    char sift;
    cin>>sift;

    string str;
    cin>>str;

    string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";

    string ans="";

    for(char ch:str){
        int idx=keyboard.find(ch);
        if(sift=='R'){
            ans+=keyboard[idx-1];
        }else{
            ans+=keyboard[idx+1];
        }

    }
    cout<<ans<<endl;
    
}