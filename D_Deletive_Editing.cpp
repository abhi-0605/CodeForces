#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s,t;
        cin>>s>>t;

        vector<int>need(26,0);

        for(char c:t){
            need[c-'A']++;
        }

        string ans;
        for(int i=s.size()-1;i>=0;i--){
            int c=s[i]-'A';
            if(need[c]>0){
                ans+=s[i];
                need[c]--;
            }
        }

        reverse(ans.begin(),ans.end());

        if(ans==t){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }   

    }
}