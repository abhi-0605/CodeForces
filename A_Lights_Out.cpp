#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<vector<int>>arr(3,vector<int>(3,1));
    vector<vector<int>>pressed(3,vector<int>(3));

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>pressed[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(pressed[i][j]%2!=0){
                arr[i][j]^=1;
                if(j>0){
                    arr[i][j-1]^=1;
                }
                if(j<2){
                    arr[i][j+1]^=1;
                }
                if(i>0){
                    arr[i-1][j]^=1;
                }
                if(i<2){
                    arr[i+1][j]^=1;
                }
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }



    return 0;
}