#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
    int nums1[]={1,2,3,1,1,1,1,4,2,3};
    
	int n1=sizeof(nums1)/sizeof(nums1[0]);
	int k=3;
	    
	int length= INT_MIN;
	
// 	for(int i=0;i<n1;i++){
// 	    for(int j=i;j<n1;j++){
// 	        int sum=0;
// 	        for(int k=i;k<=j;k++){
// 	            sum+=nums1[k];
// 	        }
// 	        if(sum==p){
// 	            length=max(length,j-i+1);
// 	        }
// 	    }
// 	}

//     for(int i=0;i<n1;i++){
//         int sum=0;
// 	    for(int j=i;j<n1;j++){
// 	        sum+=nums1[j];
// 	        if(sum==p){
// 	            length=max(length,j-i+1);
// 	        }
// 	    }
// 	}
	
// 	cout<<length<<endl;


    // unordered_map<long long ,int>mp;
    // long long sum=0;
    // for(int i=0;i<n1;i++){
    //     sum+=nums1[i];
        
    //     if(sum==k){
    //         length=max(length,i+1);
    //     }
        
    //     int rem=sum-k;
    //     if(mp.find(rem)!=mp.end()){
    //         int len=i-mp[rem];
    //         length=max(length,len);
    //     }
    //     if(mp.find(sum)!=mp.end()){
            //     mp[sum]=i;
            // }   
    // }
    
    
    int lp=0;
    int rp=0;
    int sum=nums1[0];
    
    while(rp<n1){
        
        while(lp<=rp && sum>k){
            sum-=nums1[lp];
            lp++;
        }
        
        if(sum==k){
            length=max(length,rp-lp+1);
        }
        rp++;
        if(rp<n1){
            sum+=nums1[rp];
        }
    }
    
    cout<<length<<endl;
	
 

}
