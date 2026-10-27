#include<bits/stdc++.h>
using namespace std;

int main(){
    
        int n,d;
        cin>>n>>d;
        int ans=0;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ans+=x;
        }

        if(ans+10*(n-1)>d){
            cout<<-1<<endl;
        }else{
            cout<<(d-ans)/5<<endl;
        }
    
}