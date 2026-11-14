#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int &it:arr) cin>>it;

    sort(arr.begin(),arr.end());

    cout<<min((arr[n-2]-arr[0]),(arr[n-1]-arr[1]))<<endl;

    return 0;
}