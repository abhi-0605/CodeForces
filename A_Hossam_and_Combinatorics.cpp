#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int min=*min_element(arr.begin(),arr.end());
        int max=*max_element(arr.begin(),arr.end());

        if(min==max){
            cout<<(long long)n*(n-1)<<endl;
        }else{
            long long count_min=count(arr.begin(),arr.end(),min);
            long long count_max=count(arr.begin(),arr.end(),max);
            cout<<count_min*count_max*2<<endl;
        }
    }

    return 0;
}