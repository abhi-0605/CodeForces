#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int minele=*min_element(arr.begin(),arr.end());
    int maxele =*max_element(arr.begin(),arr.end());

    int minidx,maxidx;
    for(int i=0;i<n;i++){
        if(arr[i]==maxele){
            maxidx=i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(arr[i]==minele){
            minidx=i;
            break;
        }
    }

    int ans=maxidx+(n-1-minidx);
        if(maxidx>minidx){
            ans--;
        }
    
    cout<<ans<<endl;;
    return 0;

}