#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        if(x>45){
            cout<<"-1"<<endl;
            continue;
        }
        string ans="";
        for(int i=9;i>=1;i--){
            if(x>=i){
                ans+=char(i+'0');
                x-=i;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
}