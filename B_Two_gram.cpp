#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;


    unordered_map<string,int> mp;
    for(int i=0;i<n;i++){
        string str=s.substr(i,2);
        mp[str]++;
    }

    string ans="";
    int count=0;
    for(auto it:mp){
        count=max(count,it.second);
        if(it.second==count){
            ans=it.first;
        }
    }

    cout<<ans<<endl;
}