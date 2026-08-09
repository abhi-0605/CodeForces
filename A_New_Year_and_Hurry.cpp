#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int left=240-k;
    int ans=0;
    int sum=0;

    for(int i=1;i<=n;i++){
        sum+=5*i;

        if(sum<=left){
            ans++;
        }else{
            break;
        }
    }

    cout<<ans<<endl;
}