#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    int ccount=0,acount=0;
    for(int i=0;i<n;i++){
        if(str[i]=='A') acount++;
        else ccount++;
    }

    if(acount>ccount){
        cout<<"Anton";
    }else if(acount<ccount){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
}