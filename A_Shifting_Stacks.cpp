#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        

        bool flag=1;
        long long sum=0;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;

            if(sum<1LL*i*(i+1)/2){
                flag=0;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}