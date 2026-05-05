#include <bits/stdc++.h>

using namespace std;

string longestPalindrome(string s) {
  int n = s.size();
  int ans = 1;
  string final_ans;
  for (int i = 1; i < n; i++) {
    int x = 1;
    int res = 1;
    string a = to_string(s[i]);
    while (1) {
      if (i+x < n and i-x >= 0 and s[i-x] == s[i+x]) {
	res++;
	x++;
	a = s[i-x] + a + s[i-x];
      } else {
	break;
      }
    }
    if (ans > res) {
      final_ans = a;
    }
  }

  return final_ans;
}

int main() {
  string s = "babad";
  cout << longestPalindrome(s) << "\n";
}
