#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    set<int>st;
    for(char ch:str){
        if(ch>='a' && ch<='z'){
            st.insert(ch);
        }
    }

    cout<<st.size();
}