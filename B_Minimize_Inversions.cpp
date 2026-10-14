#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n;
    cin>>n;

    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    vector<pair<int,int>>p(n);
    for(int i=0;i<n;i++){
        p[i] ={a[i], b[i]};

    }


    sort(p.begin(),p.end());


    

    for(int i=0;i<n;i++){
        cout<<p[i].first<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<p[i].second<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        sol();
    }
}