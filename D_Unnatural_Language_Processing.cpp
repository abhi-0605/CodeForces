#include<bits/stdc++.h>
using namespace std;

bool isvowel(char c){
    return c=='a'|| c=='e';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string str;
        cin>>str;

        for(int i=0;i<n;i++){
            cout<<str[i];

            if(isvowel(str[i])){
                if(i+2<n && !isvowel(str[i+1]) && isvowel(str[i+2])){
                    cout<<".";
                }else if(i+1<n){
                    cout<<str[i+1];
                    i++;
                    if(i+1<n){
                        cout<<".";
                    }
                }
            }
        }
        cout<<endl;
    }
}