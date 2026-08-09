#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int one=0, two=0, three=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='1'){
            one++;
        }else if(str[i]=='2'){
            two++;
        }else if(str[i]=='3'){
            three++;
        }
    }

    string ans="";
    while(one--){
        ans+="1+";
    }
    while(two--){
        ans+="2+";
    }
    while(three--){
        ans+="3+";
    }
    ans.pop_back();

    cout<<ans<<endl;
}