#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long ans=0;
    int neg=0;
    bool zero=false;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans+=arr[i]-1;
        }else if(arr[i]<0){
            ans+= -arr[i] -1;
            neg++;
        }else{
            ans+=1;
            zero=true;
        }
    }

    if(neg%2==1 && !zero){
        ans+=2;
    }

    cout<<ans<<endl;

}