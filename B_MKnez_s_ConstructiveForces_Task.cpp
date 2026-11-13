#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n%2==0){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<(i%2==0?1:-1)<<" ";
            }
            cout<<endl;
        }else if(n==3){
            cout<<"NO"<<endl;
        }else{
            int x=(n-3)/2;
            int y=-(n-1)/2;
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<(i%2==0?x:y)<<" ";
            }
            cout<<endl;
        }
    }
}