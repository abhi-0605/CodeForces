#include<bits/stdc++.h>
using namespace std;

int main(){
    int  t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        long long extra=0;   
        bool flag=true;
        
        for(int i=0;i<n;i++){
            extra+= arr[i];

            if(extra<(i+1)){
                flag=false;
                break;
            }
            extra-=(i+1);

        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}