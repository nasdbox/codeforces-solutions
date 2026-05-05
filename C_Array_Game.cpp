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
    for k = 2;
    we have to pick two numbers ai and aj and append  |ai - aj|
        try to make it nearest to any integer as much as possible

        for each ai we have to do binary search for aj that would make it nearest to any integer in the array
	
*/

void solve() {
    int n, k; cin >> n >> k;
    vi a(n); readv(a);
    if (k >= 3) {
        cout << 0 << "\n";
        return;
    }
    sort(a.begin(), a.end());
    // finding for k = 1
    int ans = a[0];
    if (k == 1) {
        for (int i = 0; i+1 < n; i++) {
            ans = min(ans, a[i+1]-a[i]);
        }
        cout << ans << "\n";
        return;
    }



    // for k = 2
    ans = a[0];
    for (int i = 0; i < n; i++) {
        int x = a[i];
        for (int j = i+1; j < n; j++) {
            // we have to make abs(abs(x-y) - aj) smallest
            int y = a[j];
            ans = min(ans, y-x);
            int z = lower_bound(a.begin(), a.end(), abs(x-y)) - a.begin();
            if (z >= 0 and z < n and a[z]-(y-x) == 0) {
                cout << 0 << "\n";
                return;
            }
            if (z >= 0 and z < n)
                ans = min(ans, abs(a[z]-(y-x)));
            if (z-1 >= 0)
                ans = min(ans, abs((y-x)-a[z-1]));
        }
    }

    cout << ans << "\n";

}


int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
