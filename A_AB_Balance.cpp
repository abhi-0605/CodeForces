#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        if(str.front() != str.back()){
            str.back() = str.front();
        }

        cout<<str<<endl;
    }

    return 0;
}