#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        long long minimum,maximum;
        

        if(i==0){
            minimum=arr[1]-arr[0];
        }else if(i==n-1){
            minimum=arr[n-1]-arr[n-2];
        }else{
            minimum=min(arr[i]-arr[i-1],arr[i+1]-arr[i]);
        }

        maximum=max(arr[i]-arr[0],arr[n-1]-arr[i]);

        cout<<minimum<<" "<<maximum<<endl;
    }
}