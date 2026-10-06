#include<bits/stdc++.h>
using namespace std;

int main(){
    int  t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;

        int zero=0;
        int ans=INT_MIN;

        for(int i=0;i<str.size();i++){
            if(str[i]=='0'){
                zero++;
            }
            else{
                ans=max(ans,zero);
            }
        }

        cout<<str.size()-ans-1<<endl;
    }
}