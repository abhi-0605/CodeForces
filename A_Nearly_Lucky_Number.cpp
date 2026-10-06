#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    int count=0;
    while(n!=0){
        int rem=n%10;
        if(rem==4 || rem==7){
            count++;
        }
        n/=10;
    }

    bool lucky=1;
    if(count==0) lucky=0;

    
    while(count>0){
        int k=count%10;

        if(k!=4 && k!=7){
            lucky=0;
            break;
        }
        count/=10;
    }

    if(lucky) cout<<"YES";
    else cout<<"NO";
}