#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i < n;i++)
typedef long long ll;

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

  char ch[10000];
  scanf("%s", ch);
  string s = string(ch);
  int n;
  scanf("%d", &n);
  int q, f;
  char c;
  rep(i, n)
  {
    scanf("%d %d %s", &q, &f, &c);
    if (q == 1) {
      reverse(s.begin(), s.end());
    } else {
      if (f == 1)
      {
        s = c + s;
      } else {
        s += c;
      }
    }
  }

  cout << s << endl;
}
