#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;

        long long num1=abs(a-b);
        long long num2=(a+c)-b;

        cout<<max(num1,num2)<<endl;
    }
}