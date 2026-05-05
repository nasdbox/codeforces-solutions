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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *l, TreeNode *r) : val(x), left(l), right(r) {}
};

map<int, vector<TreeNode*>> memo;
vector<TreeNode*> allPossibleFBT(int n) {
if (n&1^1) return {};
if (memo.count(n)) return memo[n];
// 1 to n-2 for the left subtree
vector<TreeNode*> ans;
if (n == 1) {
    ans.push_back(new TreeNode(0));
    return memo[n] = ans;
}
for (int left = 1; left <= n-2; left += 2) {
    int left_nodes = left;
    int right_nodes = n-1-left;
    auto left_tree = allPossibleFBT(left_nodes);
    auto right_tree = allPossibleFBT(right_nodes);
    for (auto &l : left_tree) {
    for (auto &r : right_tree) {
        TreeNode *t = new TreeNode(0);
        t->left = l;
        t->right = r;
        ans.push_back(t);
    }
    }
}

return memo[n] = ans;

}

vector<TreeNode*> ans;

// void dfs(TreeNode *r) {
//     if (r) {
//         cout << r->val << " ";
//         dfs(r->left);
//         dfs(r->right);
//     } else {
//         cout << "null" << " ";
//     }

// }

// void dfs(TreeNode* r) {
//     if (not r) {
//         cout << "null";
//         return;
//     }
//     cout << r->val;
//     if (r->left || r->right) {
//         cout << "(";
//         dfs(r->left);
//         cout << ",";
//         dfs(r->right);
//         cout << ")";
//     }
// }


void dfs(TreeNode* r) {
    if (!r) {
        cout << "null";
        return;
    }
    cout << r->val << "(";
    dfs(r->left);
    cout << ",";
    dfs(r->right);
    cout << ")";
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n; cin >> n;
    ans = allPossibleFBT(n);
    for (auto &i : ans) {
        dfs(i);
        cout << "\n";
    }
    // cout << "\n";
}