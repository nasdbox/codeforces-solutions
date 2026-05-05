#include <bits/stdc++.h>
using namespace std;
#define inf LLONG_MAX
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define readv(a) for (auto &i : a) cin >> i;
#define test int tc; cin >> tc; while (tc--)

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T, typename R> using o_map = tree<T, R, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

using ll = long long;

// Problem Statement
/*

*/

// Observations + Proofs
/*

*/

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    ll n; cin >> n;
    ll a[n]; readv(a);
    o_set<pair<int, int>> g;
    ll a2[n];
    for (int i = 0; i < n; i++) {
        ll tot = g.size();
        ll cnt = tot - g.order_of_key({a[i], i});
        a2[i] = cnt;
        g.insert({a[i], i});
    }
    
    ll ans = 0;
    o_set<pair<int, int>> l;
    for (int i = n-1; i >= 0; i--) {
        ll cnt = l.order_of_key({a[i], i});
        ans += (a2[i] * cnt);
        l.insert({a[i], i});
    }
    
    cout << ans << "\n";
}