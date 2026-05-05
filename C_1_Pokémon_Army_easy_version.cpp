#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf LLONG_MAX
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define readv(a) for (auto &i : a) cin >> i;
#define test int tc; cin >> tc; while (tc--)

// Problem Statement
/*

*/

// Observations + Proofs
/*
    positives >= negatives
    atmost positives = negatives + 1

    for i = 1 -> N:
        if there are 1 positive it's only possible when N = 1
            because it's always a chance to minimize it if there is another element exist
        
        if there are N positive it's only possible when N = 1

        N = 1 is a trivial case

        for N = 2
        take first as + and second as - (somewhat trivial)

        for N = 3:
            either i will take second element as neg or third element

        first element can't be taken as negative

        i can't choose consecutive negative / positive elements too
            what if after sorting they become consecutive
                sorting is a bad idea

        greedy 
            2 1 2 5 4 3 6 7
            pos = 2 + 2 + 7
            neg = 0 + 1 + 3

            1 2 2 3 4 5 6 7


        dp
            dp[i][k] = max sum with ending at index i when sign = k
            dp[i-1][k] = max sum ending at index i-1 when sign = k

            dp[i] = max(dp[i-1], a[i], dp[i-1] + dir * a[i]);

            dp[i][k] = max(dp[i-1][k], dp[i-1][k] - k*a[i]);
            dp[i][-k] = max(dp[i-2][-k], dp[i-2][-k] + k * a[i]);

*/

static const int N = 3e5;
int dp[N+5][2];

void solve() {
    int n, q; cin >> n >> q;
    int a[n]; readv(a);
    int dir = -1;
    // 0 = positive and 1 = negative
    dp[0][0] = a[0];
    dp[0][1] = 0;
    for (int i = 1; i < n; i++) {
        dp[i][0] = max(dp[i-1][0], dp[i-1][1]+a[i]);
        dp[i][1] = max(dp[i-1][1], dp[i-1][0]-a[i]);
        if (i-2 >= 0) {
            dp[i][0] = max(dp[i][0], dp[i-2][0]);
            dp[i][1] = max(dp[i][1], dp[i-2][1]);
        }
    }

    cout << max(dp[n-1][0], dp[n-1][1]) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
}