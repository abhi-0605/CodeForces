#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    vector<int>freq(26);

    for(int i=0;i<str.size();i++){
        freq[str[i]-'a']=1;
    }

    int size=0;
    for(int i=0;i<26;i++){
        if(freq[i]==1){
            size++;
        }
    }

    if(size%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
}