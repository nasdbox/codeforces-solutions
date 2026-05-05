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
    which card being pulled..
        this will give us it's index..
            then we won't change the indexes of those cards that are having greater index than that
            
            what if the index is lesser or equal
                we will increment by 1 % the index of the card being pulled
            
*/

void solve() {
    int n, q; cin >> n >> q;
    vi a(n); readv(a);
    vi t(q); readv(t);
    for (int i = 0; i < q; i++) {
        int x = find(a.begin(), a.end(), t[i]) - a.begin();
        cout << x + 1 << " ";
        rotate(a.begin(), a.begin()+x, a.begin()+x+1);
    }

    cout << "\n";

    
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    solve();
}