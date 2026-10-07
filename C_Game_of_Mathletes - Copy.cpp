#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }

        int ans=0;

        for(auto it=mp.begin(); it!=mp.end();it++){
            int x=it->first;
            int freq=it->second;

            int y=k-x;

            if(mp.find(y)==mp.end()){
                continue;
            }

            if(x==y){
                ans+=freq/2;
            }else if(x<y){
                ans+=min(freq,mp[y]);
            }
        }
        cout<<ans<<endl;
    }
}