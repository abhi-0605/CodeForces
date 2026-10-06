#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

    int ans=0;
    while(1){
        if(a==b || b==c || c==a){
            break;
        }

        vector<int>arr={a,b,c};
        sort(arr.begin(),arr.end());

        arr[0]++;
        arr[2]--;

        a=arr[0];
        b=arr[1];
        c=arr[2];
        ans++;
    }
    

    cout<<ans<<endl;
    }
}