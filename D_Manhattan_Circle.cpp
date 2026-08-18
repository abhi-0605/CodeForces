#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<char>>arr(n,vector<char>(m));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }

        int minRow=n;
        int maxRow=-1;
        int minCol=m;
        int maxCol=-1;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='#'){
                    minRow=min(minRow,i);
                    maxRow=max(maxRow,i);
                    minCol=min(minCol,j);
                    maxCol=max(maxCol,j);
                }
            }
        }

        int centerRow=(minRow+maxRow)/2;
        int centerCol=(minCol+maxCol)/2;

        cout<<centerRow+1<<" "<<centerCol+1<<endl;
    }
    return 0;
}