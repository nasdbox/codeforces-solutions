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

const int maxn = 2000*100 + 5;
vector<int> adj[maxn];
int low[maxn], dfn[maxn], scc[maxn];
bool in_stack[maxn];
stack<int> st;
int timer = 0, scc_cnt = 0;

void tarjan(int u) {
    dfn[u] = low[u] = ++timer;
    st.push(u);
    in_stack[u] = 1;
    for (auto &v : adj[u]) {
        if (not dfn[v]) {
            tarjan(v);
            low[u] = min(low[u], low[v]);
        } else if (in_stack[v]){
            low[u] = min(low[u], dfn[v]);
        }
    }

    if (low[u] == dfn[u]) {
        scc_cnt++;
        while (1) {
            int v = st.top(); st.pop();
            in_stack[v] = 0;
            scc[v] = scc_cnt;
            if (u == v) break;
        }
    }
}

void solve() {
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; i++) {
        // int t1, t2, c1, c2;
        char c1, c2; int t1, t2;
        cin >> c1 >> t1 >> c2 >> t2;
        int u = (c1 == '+') ? 2*t1 : 2*t1 + 1;
        int v = (c2 == '+') ? 2*t2 : 2*t2 + 1;
        adj[u^1].push_back(v);
        adj[v^1].push_back(u);
    }

    for (int i = 2; i <= 2*m+1; i++) if (not dfn[i]) tarjan(i);

    vector<char> ans(m+1);
    for (int i = 1; i <= m; i++) {
        if (scc[2*i] == scc[2*i+1]) {
            cout << "IMPOSSIBLE\n";
            return;
        }
        ans[i] = (scc[2*i] < scc[2*i+1]) ? '+' : '-';
    }

    for (int i = 1; i <= m; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    solve();
}