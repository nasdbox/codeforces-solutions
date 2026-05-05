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
    down, right up left
*/

int dc[] = {0, -1, 0, 1};
int dr[] = {1, 0, -1, 0};

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int h, w, rows, cols; cin >> h >> w >> rows >> cols;
    rows--; cols--;
    vector<string> room(h); readv(room);
    // in all directions
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        int tr = rows + dr[i];
        int tc = cols + dc[i];
        while (tr >= 0 and tc >= 0 and tr < h and tc < w and (room[tr][tc] == '.')) {
            tr += dr[i];
            tc += dc[i];
            cnt++;
        }
    }
    cnt++;
    cout << cnt << "\n";
}