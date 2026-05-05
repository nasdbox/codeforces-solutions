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
    ncr = fact(n) * inv(r) * inv(n-r) 
*/

int p;

int MOD = 1e9 + 7;

int modpow(int a, int x, int mod) {
    int res = 1;
    while (x) {
        if (x & 1) {
            res = res * a % mod;
        }
        a = a * a % mod;
        x >>= 1;
    }
    return res;
}

int inv(int x) {
    return modpow(x, MOD-2, MOD);
}

int C(int n, int k) {
    double res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n-k+i)/(i);
    }
    return (int)(res + 0.01);
}

int fact(int x) {
    int res = 1;
    for (int i = 2; i <= x; i++) res *= i;
    return res;
}

int modified_C(int n, int k) {
    return ((fact(n) % p) * inv(k) % p) * inv(n-k) % p;
}

void solve() {
    int n, k; cin >> n >> k >> p;
    int x = 100;
    MOD = p;
    vector<int> a(x, 0), b(x, 0);
    int i = 0;
    while (n) {
        int rem = n % p;
        a[i] = rem;
        n /= p;
        i++;
    }
    i = 0;
    while (k) {
        int rem = k % p;
        b[i] = rem;
        k /= p;
        i++;
    }
    int ans = 1;
    for (int i = 0; i < x; i++) {
        ans = ans * modified_C(a[i], b[i]) % p;
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    test solve();
}