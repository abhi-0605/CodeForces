#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        bool flag=0;
        for(int i=0;i<n && !flag;i++){
            for(int j=i;j<n && !flag;j++){
                int freq[101]={0};
                for(int p=i;p<=j;p++){
                    freq[arr[p]]++;
                }


                bool mark=1;
                for(int l=1;l<=100;l++){
                    if(l==k) continue;

                    if(freq[l]>=freq[k]){
                        mark=0;
                        break;
                    }
                }

                if(mark){
                    flag=1;
                }
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}