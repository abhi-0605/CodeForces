#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n==1){
            cout<<9<<endl;
            continue;
        }
        string str="98";
        for(int i=2;i<n;i++){
            str+=char('0'+(7+i)%10);
        }
        cout<<str<<endl;
    }
    return 0;
}