#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }

        int max_freq=0;
        for(auto it:mp){
            max_freq=max(max_freq,it.second);
        }

        int operations=0;

        while(max_freq<n){
            int copy=min(max_freq,n-max_freq);
            operations+=1+copy;
            max_freq+=copy;
        }
        cout<<operations<<endl;
    }
}