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
    dp[i][v] = # of min changes need to be done such that first i operations are dice roll and ends with v

    dp[i][v] = min { dp[i-1][y] } for all y = 1, 2, 3, 4, 5, 6 but not v, and 7 - v

    for i in range(1, n+1):
        for j in range(1, 7):
            if (i != j and i+j != 7):
                

*/

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    test {
        int n; cin >> n;
        int a[n]; readv(a);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int j = i;
            while (1) {
                if (j+1 >= n) break;
                int x = a[j];
                int y = a[j+1];
                if ((x == y) or (x+y == 7)) {
                    j++;
                } else {
                    break;
                }
            }

            int d = j - i + 1;
            if (d > 2) {
                ans += (d-1) / 2;
            } else if (d == 2) {
                ans++;
            }

            i = j;
        }

        cout << ans << "\n";
    }
}