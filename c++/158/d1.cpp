#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i < n;i++)
typedef long long ll;

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

  string s;
  cin >> s;
  int q;
  cin >> q;
  string t;
  rep(qi, q)
  {
    int ty;
    cin >> ty;
    if (ty == 1) {
      swap(s, t);
    }
    else if (ty == 2)
    {
      int f;
      char c;
      cin >> f >> c;
      if (f == 1) {
        t += c;
      } else if (f == 2) {
        s += c;
      }
    }
  }
  reverse(t.begin(), t.end());
  t += s;
  cout << t << endl;
}
