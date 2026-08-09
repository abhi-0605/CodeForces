#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string str;
    cin>>str;

    vector<bool>arr(26,0);

    for(char ch:str){
        ch=tolower(ch);
        arr[ch-'a']=1;
    }

    int count=0;
    for(int i=0;i<26;i++){
        count+=arr[i];
    }

    if(count==26){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}