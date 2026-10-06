#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    double sum=0;
    for(int i=0;i<n;i++){
        int per=0;
        cin>>per;

        sum+=per;
    }
    double ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
}