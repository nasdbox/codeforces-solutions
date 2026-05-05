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

const string filename = "breedflip";

ifstream fin(filename+".in");
ofstream fout(filename+".out");


int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int cnt = 0;
    int ans = 0;
    auto cin_buf = cin.rdbuf(fin.rdbuf());
    auto cout_buf = cout.rdbuf(fout.rdbuf());
    int n; cin >> n;
    string a, b; cin >> a >> b;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            cnt++;
        } else {
            if (cnt) ans++;
            cnt = 0;
        }
    }

    if (cnt) ans++;

    cout << ans << "\n";
}