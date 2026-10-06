#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>arr(5,vector<int>(5));

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }

    int row=0;
    int col=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                row=i+1;
                col=j+1;
            }
        }
    }
    int ans=0;
    ans=abs(3-row)+abs(3-col);

    cout<<ans<<endl;
}