#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vector<int>odd;
        int even=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd.push_back(arr[i]);
            }
        }

        long long ans=0;
        ans += 1LL * even * (even-1)/2;
        ans += 1LL * even * odd.size();

        for(int i=0;i<(int)odd.size();i++){
            for(int j=i+1;j<(int)odd.size();j++){
                if(gcd(odd[i],2*odd[j])>1){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}