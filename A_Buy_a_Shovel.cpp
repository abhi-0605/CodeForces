#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,r;
    cin>>k>>r;

    for(int i=1;i<=10;i++){
        int rem=(i*k)%10;
        if(rem==0 || rem==r){
            cout<<i;
            break;
        }
    }
}