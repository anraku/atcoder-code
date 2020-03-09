#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i < n;i++)
typedef long long ll;

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

  int a, b, m;
  cin >> a >> b >> m;
  vector<int> A(a);
  vector<int> B(b);
  vector<vector<int> > M(m);
  rep(i, a)
    cin >> A[i];
  rep(i, b)
    cin >> B[i];

  int minA = *min_element(A.begin(), A.end());
  int minB = *min_element(B.begin(), B.end());
  int ans = minA + minB;

  rep(i, m){
    int x, y, c;
    cin >> x >> y >> c; x--; y--;
    ans = min(ans, A[x] + B[y] - c);
  }

  cout << ans << endl;
}

