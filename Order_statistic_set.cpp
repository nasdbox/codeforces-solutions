#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T, typename R> using o_map = tree<T, R, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


// Problem Statement
/*

*/

// Observations + Proofs
/*

*/

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t = 0; cin >> t;
    o_set<int> s;
    while (t--) {
        char c; int n; cin >> c >> n;
        if (c == 'I') {
            s.insert(n);
        } else if (c == 'D') {
            s.erase(n);
        } else if (c == 'K') {
            int cnt = *s.find_by_order(n-1);
            if (cnt == 0) {
                cout << "invalid" << "\n";
                continue;
            }
            cout << cnt << "\n";
        } else if (c == 'C') {
            int x = s.order_of_key(n);
            cout << x << "\n";
        }
    }
    return 0;
}