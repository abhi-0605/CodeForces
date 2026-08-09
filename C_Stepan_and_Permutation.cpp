#include<bits/stdc++.h>
using namespace std;   

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        bool flag=true;
        int g=gcd(x,y);

        for(int i=0;i<n;i++){
            
            if((i+1)%g != (arr[i]%g)){
                flag=false;
                break;
            }        
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}