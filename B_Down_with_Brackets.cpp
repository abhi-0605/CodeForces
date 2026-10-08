#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;

        bool flag=false;

        int count=0;

        for(int i=0;i<str.length()-1;i++){
            if(str[i]=='('){
                count++;
            }else{
                count--;
            }

            if(count==0){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}