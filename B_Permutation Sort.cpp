#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n);
        for(auto &i:arr){
            cin>>i;
        }

        if(is_sorted(arr.begin(),arr.end())){
            cout<<"0"<<endl;
        }else if(arr[0]==1 || arr[n-1]==n){
            cout<<"1"<<endl;
        }else if(arr[0]==n && arr[n-1]==1){
            cout<<"3"<<endl;
        }else{
            cout<<"2"<<endl;
        }
    }
}