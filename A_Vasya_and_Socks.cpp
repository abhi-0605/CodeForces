#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int ans=0;
    while(n!=0){
        n--;
        ans++;
        if(ans%m==0){
            n++;
        }
    }
    cout<<ans<<endl;
}