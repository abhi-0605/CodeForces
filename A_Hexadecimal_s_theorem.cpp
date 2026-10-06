#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    vector<long long>fib={0,1};

    while(fib.back()<=n){
        fib.push_back(fib[fib.size()-1]+fib[fib.size()-2]);
    }

    if(n==0){
        cout<<"0 0 0"<<endl;
        return 0;
    }
    int k=0;
    while(fib[k]!=n){
        k++;
    }

    if(n==1){
        cout<<"0 1 1"<<endl;
        return 0;
    }else{
        cout<<fib[k-1]<<" "<<fib[k-2]<<" "<<"0"<<endl;
    }

    return 0;

}