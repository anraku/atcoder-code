#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i < n;i++)
typedef long long ll;

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;
  int count = 0;
  while(count <= n) {
    if (a + count > n) {
      ans += n - count;
      break;
    } else {
      ans += a;
      count += a;
    }
    count += b;
  }

  cout << ans << endl;
}