#include<bits/stdc++.h>
using namespace std;


int main(){
    
    string str1;
    cin>>str1;
    string str2;
    cin>>str2;

    int idx=min(str1.size(),str2.size());
    int count=0;
    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());
    for(int i=0;i<idx;i++){
        if(str1[i]==str2[i]){
            count++;
        }else{
            break;
        }
    }
    // cout<<count<<endl;

    cout<<str1.size()+str2.size()-2*count<<endl;

    return 0;
}