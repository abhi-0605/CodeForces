#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }

    bool tri=false,seg=false;
    for(int i=0;i<4;i++){
        int x[3],k=0;
        for(int j=0;j<4;j++){
            if(j!=i){
                x[k]=arr[j];
                k++;
            }
        }
        sort(x,x+3);
        if(x[0]+x[1]>x[2]){
            tri=true;
        }else if(x[0]+x[1]==x[2]){
            seg=true;
        }

    }

    if(tri){
        cout<<"TRIANGLE"<<endl;
    }else if(seg){
        cout<<"SEGMENT"<<endl;
    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }

    return 0;


}