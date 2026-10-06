#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string str;
    cin>>str;

    stack<char>st;

    for(char ch:str){
        if(!st.empty() && st.top()!=ch){
            st.pop();
        }else{
            st.push(ch);
        }
    }

    cout<<st.size()<<endl;
}