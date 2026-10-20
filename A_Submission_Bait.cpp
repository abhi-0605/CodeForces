#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n+1,0);
        for(int i=0;i<n;i++){
            int c;
            cin>>c;
            arr[c]++;
        }

        bool flag=true;
        int count=0;    
        for(int i=1;i<=n;i++){
            if(arr[i]%2==1){
                flag=false;
                break;
            }
        }

        if(!flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}