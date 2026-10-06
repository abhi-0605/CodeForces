#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=0;
    if(n>=0){
        ans=n;
    }else{
        int n1=n;
        int n2=n/10;
        int n3= (n/100) * 10+ (n%10);
        ans=max({n1,n2,n3});
    }

    cout<<ans<<endl;
    
}