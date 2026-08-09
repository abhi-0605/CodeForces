#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        string str;

        cin>>n;
        cin>>str;   

        int ans=0;
        int cntless=0, cntmore=0;
        for(int i=0;i<n;i++){
           if(str[i]=='<'){
                ans++;
                cntless=max(cntless, ans);
            }else{
                ans=0;
            }
        }
        
        ans=0;
        for(int i=0;i<n;i++){
           if(str[i]=='>'){
                ans++;
                cntmore=max(cntmore, ans);
            }else{
                ans=0;
            }
        }
        cout<<max(cntless, cntmore)+1<<endl;
    }
}