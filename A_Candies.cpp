#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        for(int i=2;i<=30;i++){
            int sum=(1<<i)-1;

            if(n%sum==0){
                cout<<n/sum<<endl;
                break;
            }
        }
    }

    return 0;
}