#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        long long sum = n*(n+1)/2;
        long long power = 0;

        for(int i=1;i<=n;i*=2){
            power += i;
        }

        cout<<(sum-2*power)<<endl;
    }
}