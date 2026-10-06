#include<bits/stdc++.h>
using namespace std;

int main(){
    int e;
    cin>>e;
    int step=0;
    while(e>0){
        step++;
        if(e>=5){
            e-=5;
        }else{
            e=0;
        }
    }

    
    
    cout<<step<<endl;
  
}