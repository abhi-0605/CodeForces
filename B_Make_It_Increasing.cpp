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
        
        int ans=0;
        bool flag=true;

        for(int i=n-1;i>0;i--){
            while(arr[i]<=arr[i-1] && arr[i-1]>0){
                arr[i-1]=(arr[i-1]/2);
                //cout<<arr[i-1]<<" ";
                ans++;
            }

            if(arr[i]<=arr[i-1]){
                flag=false;
                break;
            }
  
            
        }
        if(flag){
            cout<<ans<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
} 