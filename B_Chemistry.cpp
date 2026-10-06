#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        vector<int> freq(26, 0);

        for (int i = 0; i < n; i++)
        {
            freq[str[i] - 'a']++;
        }

        int o=0;
        for(int i=0;i<26;i++){
            if(freq[i]%2!=0){
                o++;
            }
        }

        int size=n-k;
        int num=size%2;;

        if(o-num<=k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}