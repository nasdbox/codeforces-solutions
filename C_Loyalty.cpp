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

*/

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    test {
        int n, x; cin >> n >> x;
        int a[n]; readv(a);
        sort(a, a+n, greater<int>());
        int l = 0, h = n-1;
        int curr = 0;
        int ans = 0;
        int res[n];
        int ind = 0;
        while (l < h) {
            if (curr+a[l] >= x) {
                res[ind++] = a[l];
                curr += a[l];
                ans += a[l];
                l++;
                curr -= x;
                continue;
            }

            res[ind++] = a[h];
            curr += a[h];
            if (curr >= x) {
                ans += a[h];
                curr -= x;
            }
            h--;
        }

        if (l == h) {
            res[ind] = a[l];
            if (curr + a[l] >= x) {
                ans += a[l];
            }
        }

        cout << ans << "\n";
        for (auto &i : res) cout << i << " ";
        cout << "\n";
    }
}