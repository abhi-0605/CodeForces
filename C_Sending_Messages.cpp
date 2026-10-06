#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,f,a,b;
        cin>>n>>f>>a>>b;

        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        long long initial=0;
        bool flag=true;
        
        for(int i=0;i<n;i++){

            long long a_cost=(arr[i]-initial)*a;
            long long cost=min(a_cost,b);

            f-=cost;
            initial=arr[i];

            if(f<=0){
                flag=false;
                break;
            }

        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}