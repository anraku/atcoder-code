#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i < n;i++)
typedef long long ll;

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

  ll n, a, b;
  cin >> n >> a >> b;

  ll ans = a * floor(n / (a + b));

  ll div = n % (a + b);
  if (div < a) {
    ans += div;
  }
  else
  {
    ans += a;
  }

  cout << ans << endl;
}
