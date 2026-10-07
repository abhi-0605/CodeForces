#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string str;
    cin>>str;

    string ans="";
    for(int i=n-1;i>=0;i--){
        int idx=ans.size()/2;
        ans.insert(ans.begin()+idx,str[i]);
    }

    cout<<ans<<endl;
}