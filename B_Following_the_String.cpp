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

        vector<int>freq(26,0);
        string str;
        for(int i=0;i<n;i++){
            for(int j=0;j<26;j++){
                if(freq[j]==arr[i]){
                    str+=(char)(j+'a');
                    freq[j]++;
                    break;
                }
            }
        }
        cout<<str<<endl;
    }
}