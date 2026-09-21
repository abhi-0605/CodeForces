#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        vector<int>arr(3);

        for(int i=0;i<3;i++){
            cin>>arr[i];
        }

        int minValue= *min_element(arr.begin(),arr.end());

        cout<<n-minValue<<endl;

    }
}