#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int ans=1;
    for(int i=0;i<n-1;i++){
        string next;
        cin>>next;

        if(str!=next){
            ans++;
        }
        str=next;
        
    }
    cout<<ans;
}