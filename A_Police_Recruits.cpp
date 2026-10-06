#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int po=0;
    int un=0;

    for(int i=0;i<n;i++ ){
        int x;
        cin>>x;

        if(x==-1){
            if(po>0){
                po--;
            }else{
                un++;
            }
        }else{
            po+=x;
        }
    }
    cout<<un<<endl;
}