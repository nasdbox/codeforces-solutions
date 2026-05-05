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
    order of consecutive sequence must be same
*/

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    test {
        int n; cin >> n;
        vi p(n); readv(p);
        vi a(n); readv(a);
        vi x;
        int prev = -1;
        for (auto i : a) {
            if (prev != i) {
                x.pb(i);
                prev = i;
            }
            
        }
        int n2 = x.size();
        // assert(n2 == 2);
        assert(n2 != 0);
        int ind = 0;
        int j = 0;

        while (ind < n2 and j < n) {
            while (ind < n2 and j < n and x[ind] == p[j]) {
                ind++;
                j++;
            }
            // assert(ind < n2);
            j++;
        }

        if (ind >= n2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}