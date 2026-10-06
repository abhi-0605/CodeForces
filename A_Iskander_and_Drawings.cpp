#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string str;
    cin>>str;

    int ans=0;
    int len=0;
    for(int i=0;i<n;i++){
        if(str[i]=='#'){
            len++;
            ans=max(ans,len);
        }else{
            len=0;
        }
    }
    cout<<(ans+1)/2<<endl;
}
}