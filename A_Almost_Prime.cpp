#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;


    int ans=0;
    for(int i=2;i<=n;i++){
        int count=0;
        for(int j=2;j<=i;j++){
            if(i%j==0){
                bool is_prime=true;

                for(int k=2;k<j;k++){
                    if(j%k==0){
                        is_prime=false;
                        break;
                    }
                }
                if(is_prime){
                    count++;
                }
            }
        }
        if(count==2){
            ans++;
        }   
    }

    

    cout<<ans<<endl;
}