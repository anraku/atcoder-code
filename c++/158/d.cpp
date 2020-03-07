#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i < n;i++)
typedef long long ll;

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

  string s;
  cin >> s;
  int n;
  cin >> n;
  int q, f;
  string c;
  rep(i, n)
  {
    cin >> q;
    if (q == 1) {
      reverse(s.begin(), s.end());
    } else {
      cin >> f >> c;
      if (f == 1) {
        s.insert(0, c);
      } else {
        s.append(c);
      }
    }
  }

  cout << s << endl;
}
