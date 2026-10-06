#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=1;
    int temp=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            temp++;
            //cout<<arr[i]<<" ";
        }else{
            temp=1;
        }
        ans=max(ans,temp);
        //cout<<ans<<endl;
    }

    cout<<ans<<endl;
}