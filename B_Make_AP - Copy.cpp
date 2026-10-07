#include<bits/stdc++.h>
using namespace std;    

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;

        bool ans=false;

        long long x= 2*b-c;
        if(x>0 && x%a==0){
            ans=true;
        }

        if(!ans){
            long long sum=a+c;
            if(sum%2==0){
                x=sum/2;
                if(x>0 && x%b==0){
                    ans=true;
                }
            }
        }

        if(!ans){
            x=2*b-a;
            if(x>0 && x%c==0){
                ans=true;
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}