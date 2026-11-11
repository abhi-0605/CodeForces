#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long maximum=0;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        long long a=x+maximum;
        cout<<a<<" ";
        maximum=max(maximum,a);
    }
    cout<<endl;
    return 0;
}