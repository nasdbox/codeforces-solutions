#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf LLONG_MAX
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define readv(a) for (auto &i : a) cin >> i;
#define test int tc; cin >> tc; while (tc--)
typedef long double ld;

// Problem Statement
/*

*/

// Observations + Proofs
/*
    AD / AB = sqrt(area(ade) / area(ade + bdec))
*/

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int cnt = 1;
    test {
        ld ab, ac, bc, ratio; cin >> ab >> ac >> bc >> ratio;
        ld ad = ab * sqrt(ratio / (ratio+1));
        cout << fixed << setprecision(6) << "Case " << cnt++ << ": " << ad << "\n";
    }
}