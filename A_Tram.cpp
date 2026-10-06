#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p=0;
    int ans=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        

        p=p-a+b;
        ans=max(ans,p);
    }

    cout<<ans<<endl;
}