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

        bool flag=true;

        for(int i=1;i<=n;i++){
            int a=arr[i-1];
            int b=i;

            while(a%2==0) a/=2;
            while(b%2==0) b/=2;
            if(a!=b){
                flag=false;
                
            }
        }
        cout<<(flag?"YES":"NO")<<endl;
    }
}