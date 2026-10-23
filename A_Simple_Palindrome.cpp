#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;


    while(t--){
        int n;
        cin>>n;

        string str="aeiou";
        string s;
        for(int i=0;i<5;i++){
            int count=n/5+(i<n%5);
            s+=string(count,str[i]);
        }
        
        cout<<s<<endl;
    }
}