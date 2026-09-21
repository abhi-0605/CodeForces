#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string str;
        cin>>str;


        long long dash=0,underscore=0;

        for(int i=0;i<str.size();i++){
            if(str[i]=='-'){
                dash++;
            }else{
                underscore++;
            }
        }

        long long l=dash/2;
        long long r=dash-l;

        cout<<underscore*l*r<<endl;
    }
}