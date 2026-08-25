#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<string>arr(8);
        for(int i=0;i<8;i++){
            cin>>arr[i];
        }

        bool contain_red=false;

        for(int i=0;i<8;i++){
            bool all_red=true;
            for(int j=0;j<8;j++){
                if(arr[i][j]!='R'){
                    all_red=false;
                    break;
                }
            }

            if(all_red){
                contain_red=true;
                break;
            }
        }

        if(contain_red){
            cout<<"R"<<endl;
        }else{
            cout<<"B"<<endl;
        }
    }
}