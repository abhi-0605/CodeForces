#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    set<int>lv;

    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        int a;
        cin>>a;
        lv.insert(a);
    }

    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int b;
        cin>>b;
        lv.insert(b);
    }

    if(lv.size()==n){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }

}