#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long ans=0;
    int price=INT_MAX;
    while(n--){
        int a,p;
        cin>>a>>p;
        price=min(price,p);
        ans+=1LL*a*price;

    }
    cout<<ans<<endl;
}