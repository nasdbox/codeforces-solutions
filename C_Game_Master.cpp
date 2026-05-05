#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf LLONG_MAX
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define readv(a) for (auto &i : a) cin >> i;
#define lets int tc; cin >> tc; while (tc--)

// Problem Statement
/*

*/

// Observations + Proofs
/*

*/

void solve() {
    int n; cin >> n;
    vi a(n); readv(a);
    vi b(n); readv(b);
    bitset<1000*100+5> b1, b2;
    vi x = a;
    map<int, int> m1, m2;
    for (int i = 0; i < n; i++) {
        m1[a[i]] = i;
        m2[b[i]] = i;
    }
    sort(x.begin(), x.end());
    b1.set(m1[x[n-1]]);
    int mx = *max_element(b.begin(), b.end());
    b2.set(m2[mx]);
    for (int i = n-2; i >= 0; i--) {
        int pos = m1[x[i]];
        int power_in_map1 = x[i];
        int power_in_map2 = b[pos]; 
        // checking if there is a bit set before the position of the player on sorted vector
        // if there is a player (whose bit is set) whose power is below then any power of this player
        // bit is set according to the real vector
        // finding that person whose bit is set and able to defeat any of them on any map
        // checkin on map1
        for (size_t k = b1._Find_first(); k < b1.size(); k = b1._Find_next(k)) {
            if (k < i) {
                b1.set(pos);
                break;
            }
        }

        // checking on map2
        int i_in_map2 = m2[power_in_map2];
        for (size_t k = b2._Find_first(); k < b2.size(); k = b2._Find_next(k)) {
            if (k < i_in_map2) {
                b2.set(pos);
                break;
            }
        }
    }

    b1 = b1 | b2;
    string ans;
    for (int i = 0; i < n; i++) {
        if (b1.test(i)) {
            ans += '1';
        } else {
            ans += '0';
        }
    }

    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    lets solve();
}