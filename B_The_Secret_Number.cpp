#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        vector<long long> ans;

        long long power = 10;

        for(int i=1;i<=18;i++){
            long long div=power+1;

            if(n%div==0){
                ans.push_back(n/div);
            }

            if(power<=1e17){
                power*=10;
            }
        }

        sort(ans.begin(),ans.end());
        cout<<ans.size()<<endl;
        for(auto it:ans){
            cout<<it<<" ";
        }
        if(ans.size()!=0){
            cout<<endl;
        }

    }
}