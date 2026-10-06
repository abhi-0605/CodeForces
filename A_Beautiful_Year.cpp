#include<bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin>>y;

    while(1){
        y++;

        string str=to_string(y);

        set<char>st(str.begin(),str.end());
        if(st.size()==4){
            cout<<y;
            break;
        }
    }
}