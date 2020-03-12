#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i < n;i++)
typedef long long ll;

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<vector<int>> d(n, vector<int>(n));
  rep(i, n)
    rep(j, n)
      cin >> d[i][j];

  vector<vector<ll>> s(n+1, vector<ll>(n+1));
  rep(i, n)
    rep(j, n)
      s[i+1][j+1] = s[i+1][j] + s[i][j+1] - s[i][j] + d[i][j];

  vector<ll> areas(n*n+1, 0);
  for(int x1 = 0; x1<n; x1++)
    for(int x2=x1+1; x2<n+1; x2++)
      for(int y1=0; y1<n; y1++)
        for(int y2=y1+1; y2<n+1; y2++){
          ll area = (x2-x1) * (y2-y1);
          ll sum = s[x2][y2] - s[x1][y2] - s[x2][y1] + s[x1][y1];
          areas[area] = max(areas[area], sum);
        }

  rep(i, n*n)
    areas[i+1] = max(areas[i+1], areas[i]);

  int q;
  cin >> q;
  rep(i, q){
    ll area;
    cin >> area;
    cout << areas[area] << endl;
  }
}
