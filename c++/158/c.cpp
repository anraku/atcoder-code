#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i < n;i++)
typedef long long ll;

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

  int a, b;
  cin >> a >> b;
  int n = 1;
  int ans = -1;
  while (n <= 1000)
  {
    if (floor(n * 0.08) == a && floor(n * 0.1) == b)
    {
      ans = n;
      break;
    }
    n++;
  }
  cout << ans << endl;
}
