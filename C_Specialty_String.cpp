#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        string str;
        cin>>n>>str;

        string s="";
        for(char c:str){
            if(!s.empty() && s.back()==c) s.pop_back();
            else s.push_back(c);
        }

        cout<<(s.empty()?"YES":"NO")<<endl;
    }
}