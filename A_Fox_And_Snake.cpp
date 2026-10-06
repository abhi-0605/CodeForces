#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        if(i%2==1){
            cout<<string(m,'#');
        }else if(i%4==2){
            cout<<string(m-1,'.')<<'#';
        }else{
            cout<<'#'<<string(m-1,'.');
        }
        cout<<endl;
    }
}