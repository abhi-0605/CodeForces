#include<bits/stdc++.h>
using namespace std;
int score_cal(int p,int t){
    return max(3*p/10,p-p/250*t);
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int misha = score_cal(a,c);
    int vasya = score_cal(b,d);

    if(vasya > misha){
        cout<<"Vasya"<<endl;
    }else if(misha > vasya){
        cout<<"Misha"<<endl;
    }else{
        cout<<"Tie"<<endl;
    }
}