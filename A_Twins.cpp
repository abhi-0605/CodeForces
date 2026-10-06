#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(begin(arr),end(arr));

    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }

    int r_sum=0;
    int count=0;
    
    for(int i=n-1;i>=0;i--){
        r_sum+=arr[i];
        count++;
        if(r_sum>total_sum-r_sum){
            break;
        }
    }

    cout<<count<<endl;
}