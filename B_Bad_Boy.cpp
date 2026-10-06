#include <bits/stdc++.h>
using namespace std;

long long dist(long long x1,long long y1,long long x2,long long y2){
    return abs(x1-x2) + abs(y1-y2);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,i,j;
        cin>>n>>m>>i>>j;

        long long distance1 = dist(i,j,1,1);
        long long distance2 = dist(i,j,n,m);
        long long distance3 = dist(i,j,1,m);
        long long distance4 = dist(i,j,n,1);

        long long cdistance = (n-1) + (m-1);

        long long ans1= cdistance + min(distance1,distance2);
        long long ans2= cdistance + min(distance3,distance4);

        if(ans1>=ans2){
            cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
        }
        else{
            cout<<1<<" "<<m<<" "<<n<<" "<<1<<endl;
        }
    }
}