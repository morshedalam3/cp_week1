#include<bits/stdc++.h>
using namespace std;
int conditioncheck(int a[],int n) {
    vector<int> dp(n, 0);

    for (int i = 1; i <=n; i++) {
        dp[i] = max(1, a[i] - i); 
        if (i > 1) {
            dp[i] = max(dp[i], dp[i - 2]); 
        }
    }

    return dp[n - 1];
}

int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int minOps = conditioncheck(a,n);
         cout << minOps << endl;
    }
    return 0;
}