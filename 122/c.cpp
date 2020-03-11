#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i < n;i++)
typedef long long ll;

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  vector<pair<int, int>> p(q);
  vector<int> arr(n+1);
  rep (i, q)
    cin >> p[i].first >> p[i].second;
  
  int count = 0;
  rep (i, n-1){
    if(s.substr(i,2) == "AC")
      count++;
    arr[i+1] = count;
  }

  rep(i, q) {
    int ans = arr[p[i].second-1] - arr[p[i].first-1];
    cout << ans << endl;
  }
}