#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long time=LLONG_MAX;
    int idx=-1;
    int count=0;

    for(int i=1;i<=n;i++){
        long long t;
        cin>>t;
        if(t<time){
            time=t;
            idx=i;
            count=1;
        }
        else if(t==time) count++;

    }
    if(count>1) cout<<"Still Rozdil"<<endl;
    else cout<<idx<<endl;
}