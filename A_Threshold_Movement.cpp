#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n==1){
            int x;
            cin>>x;
            cout<<"NO"<<endl;
            continue;
        }

        vector<long long>arr(n+2,0);
        for(int i=1;i<n+1;i++){
            cin>>arr[i];
        }

        long long max_even=LLONG_MIN,min_odd=LLONG_MAX;

        for(int i=1;i<n+1;i++){
            if(i%2==0){
                max_even=max(max_even,arr[i]);
                
            }else{
                
                min_odd=min(min_odd,arr[i]);
            }
        }

        if(min_odd-max_even>=2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}