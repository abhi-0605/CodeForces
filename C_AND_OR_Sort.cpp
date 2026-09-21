#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    int zero=-1,one=-1;
    for(int i=0;i<n;i++){
        if(str[i]=='0' && zero==-1){
            zero=i;
        }
        if(str[i]=='1' && one==-1){
            one=i;
        }
    }

    if(zero==-1 || one==-1){
        cout<<0<<endl;
        return;
    }

    int t_zero=0;
    for(int i=0;i<n;i++){
        if(str[i]=='0'){
            t_zero++;
        }
    }

    int min_operation=n+1;
    int one_before=0;
    int zero_before=0;

    for(int k=0;k<=n;k++){
        int zero_after=t_zero-zero_before;

        bool flag1=true,flag2=true;

        if(one_before>0 && (zero==-1 || zero>=k)){
            flag1=false;
        }



        if(zero_after>0){
            if(one==-1){
                flag2=false;
            }else if(one>=k){
                for(int i=k;i<one;i++){
                    if(str[i]=='0'){
                        flag2=false;
                        break;
                    }
                }
            }
        }

      
        if(flag1 && flag2){
            int curr=one_before+zero_after;
            min_operation=min(min_operation,curr);
        }

        if(k<n){
            if(str[k]=='1'){
                one_before++;
            }else{
                zero_before++;
            }
        }
    }

    cout<<min_operation<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        sol();

    }
}