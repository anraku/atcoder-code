#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i < n;i++)
typedef long long ll;

using namespace std;

int main() {
  string s;
  cin >> s;
  deque<char> q;
  for (char c : s)
    q.push_back(c);
  bool flip = false;
  int query;
  cin >> query;
  rep(qi, query)
  {
    int ty;
    cin >> ty;
    if (ty == 1) {
      flip = !flip;
    } else if (ty == 2) {
      int f;
      char c;
      cin >> f >> c;
      if (flip)
        f = 3 - f;
      if (f == 1) {
        q.push_front(c);
      } else if (f == 2) {
        q.push_back(c);
      }
    }
  }
  if (flip)
    reverse(q.begin(), q.end());
  string ans;
  for (char c : q)
    ans += c;
  cout << ans << endl;
}