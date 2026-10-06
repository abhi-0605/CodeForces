#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>host(n);
    vector<int>away(n);
    for(int i=0;i<n;i++){
        cin>>host[i];
        cin>>away[i];
    }

    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && host[i]==away[j]){
                ans++;
            }
        }
    }

    cout<<ans<<endl;
}