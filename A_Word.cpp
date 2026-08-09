#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int ucount=0;
    int lcount=0;

    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            ucount++;
        }else{
            lcount++;
        }
    }

    if(ucount>lcount){
        for(int i=0;i<str.size();i++){
            str[i]=toupper(str[i]);
        }
    }else{
        for(int i=0;i<str.size();i++){
            str[i]=tolower(str[i]);
        }
    }

    cout<<str;
}