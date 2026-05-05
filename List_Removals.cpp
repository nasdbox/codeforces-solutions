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


int32_t main() {
    ll n; cin >> n;
    o_set<pair<ll, int>> s;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        s.insert({i, x});
    }

    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        auto it = s.find_by_order(x-1);
        int ind = it->first;
        ll val = it->second;
        cout << val << " ";
        s.erase({ind, val});
    }

    cout << "\n";
}