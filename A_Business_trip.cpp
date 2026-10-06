#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;

    vector<int>arr(12);
    for(int i=0;i<12;i++){
        cin>>arr[i];

    }

    if(k==0){
        cout<<0<<endl;
        return 0;
    }

    int days=0;
    int count=0;
    sort(arr.begin(),arr.end());

    for(int i=11;i>=0;i--){
        days++;
        count+=arr[i];

        if(count>=k){
            cout<<days<<endl;
            return 0;
        }
    }

    cout<<-1<<endl;
}