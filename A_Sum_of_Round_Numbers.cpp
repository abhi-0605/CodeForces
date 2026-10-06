#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>ans;
        int mul=1;

        while(n!=0){
            int last=n%10;
            
            if(last!=0){
                ans.push_back(last*mul);
            }
            mul=mul*10;
            n=n/10;
        }

        cout<<ans.size()<<endl;
        for(int i:ans){
            cout<<i<<" ";
        }

        cout<<endl;


    }
}