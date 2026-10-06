#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;
        
        int count1=0;
        int count0=0;
        for(char ch:str){
            if(ch=='1'){
                count1++;
            }else{
                count0++;
            }
        }

        if(min(count1, count0)%2!=0){
            cout<<"DA"<<endl;
        }else{
            cout<<"NET"<<endl;
        }
    }
}