#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        bool flag = false;

        for(int i=1;i<=n;i++){
            int x;
            cin>>x;

            if(x<=2*max(i-1, n-i)){
                flag = true;
            }
        }

        if(!flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}