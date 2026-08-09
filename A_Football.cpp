#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    if(str.size()<7){
        cout<<"NO"<<endl;
        return 0;
    } 
    int con=0;
    char ch=str[0];
    bool flag=0;
    for(int i=0;i<str.size();i++){
        if(ch==str[i]){
            con++;
        }else{
            ch=str[i];
            con=1;
        }

        if(con==7){
            flag=1;
            break;
        }
    }

    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}