#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, q;
        cin >> n >> q;

        vector<long long> arr(n + 1);
        vector<long long> pre(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            pre[i] = pre[i - 1] + arr[i];
        }

        long long total_sum = pre[n];

        while (q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;
            long long sub_sum = 0;
            sub_sum = pre[r] - pre[l - 1];

            long long sum = total_sum - sub_sum +1LL * (r - l + 1) * k;
            if (sum % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}