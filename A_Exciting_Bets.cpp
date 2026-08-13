#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a,b;
        cin>>a>>b;

        long long diff=llabs(a-b);

        if(diff==0){
            cout<<"0 0"<<endl;
            continue;
        }

        long long minimum=min(a,b);
        long long rem=minimum%diff;

        long long ans=min(rem,diff-rem);

        cout<<diff<<" "<<ans<<endl;

    }
    return 0;
}