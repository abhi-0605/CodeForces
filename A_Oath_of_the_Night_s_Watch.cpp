#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<long long>arr(n);
    for(auto &i:arr){
        cin>>i;
    }

    long long maximum=LLONG_MIN;
    long long minimum=LLONG_MAX;

    for(int i=0;i<n;i++){
        maximum=max(maximum,arr[i]);
        minimum=min(minimum,arr[i]);
    }

    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]<maximum && arr[i]>minimum){
            ans++;
        }
    }
    cout<<ans<<endl;

}