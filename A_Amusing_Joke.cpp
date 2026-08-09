#include<bits/stdc++.h>
using namespace std;

int main(){

    string str1;
    string str2;
    string str3;

    cin>>str1>>str2>>str3;

    string temp=str1+str2;
    sort(temp.begin(),temp.end());
    sort(str3.begin(),str3.end());

    if(temp==str3){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    



}