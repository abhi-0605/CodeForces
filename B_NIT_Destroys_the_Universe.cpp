#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int operations=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                operations++;
                while(i<n && arr[i]!=0 ){
                    i++;
                }
            }
            
        }


        cout<<min(operations,2)<<endl;
    }
    return 0;
}