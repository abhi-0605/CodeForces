#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());

        arr.erase(unique(arr.begin(),arr.end()),arr.end());

        int ans=1;
        int current=1;

        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]+1){
                current++;
            }else{
                
                current=1;
            }
            ans=max(ans,current);
        }
        cout<<ans<<endl;
    }
}