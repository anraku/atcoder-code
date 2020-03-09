#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i < n;i++)
typedef long long ll;

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

  string s;
  cin >> s;
  string hi = "hi";
  rep(i, 5) {
    if (s == hi) {
      cout << "Yes" << endl;
      return 0;
    }
    hi += "hi";
  }

  cout << "No" << endl;
}
