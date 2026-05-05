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
        int n; cin >> n;
        int a[n]; readv(a);
        int ans = 0;
        if (n < 3) {
            ans = max(a[0], a[1]);
        } else {
            int v[] = {a[0], a[1], a[2]};
            sort(v, v+3);
            ans += v[1];
            ans += v[2];
            int s = 3;
            while (s+1 < n) {
                v[0] = a[s];
                v[1] = a[s+1];
                sort(v, v+3);
                ans += v[1];
                ans += v[2];
                s += 2;
            }
            if (s == n-1) {
                ans += max(v[2], a[n-1]);
            }

            int ans2 = 0;
            rotate(a, a+n-1, a+n);
            v[0] = a[0];
            v[1] = a[1];
            v[2] = a[2];
            sort(v, v+3);
            ans2 += v[1];
            ans2 += v[2];
            s = 3;
            while (s+1 < n) {
                v[0] = a[s];
                v[1] = a[s+1];
                sort(v, v+3);
                ans2 += v[1];
                ans2 += v[2];
                s += 2;
            }

            if (s == n-1) {
                ans2 += max(v[2], a[n-1]);
            }

            ans = min(ans, ans2);
        }

        cout << ans << "\n";
    }
}



