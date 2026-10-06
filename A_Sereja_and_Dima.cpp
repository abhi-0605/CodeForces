#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool flag=1;
    int sereja=0,dima=0;
    int l=0,r=n-1;
    int num=0;

    while(l<=r){
        int num=0;
        if(arr[l]>arr[r]){
            num=arr[l];
            l++;
        }else{
            num=arr[r];
            r--;
        }
        if(flag){
            sereja+=num;
        }else{
            dima+=num;
        }

        flag=!flag;
    }

    cout<<sereja<<" "<<dima<<endl;

}