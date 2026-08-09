#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    bool flag=0;
    for(int i=0;i<n;i++){
        if(vec[i]==1){
            cout<<"HARD";
            flag=1;
            break;
        }
    }
    if(!flag){
        cout<<"EASY";
    }
}