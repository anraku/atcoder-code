#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i < n;i++)
typedef long long ll;

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i,n)
    cin >> a[i];

  vector<ll> s(n+1);
  map<ll, ll> c;
  rep(i,n)
    s[i+1] = s[i] + a[i];
  rep(i,n+1)
    c[s[i]]++;
  
  ll ans = 0;
  for(auto itr : c){
    ll num = itr.second;
    ans += num * (num-1) / 2;
  }
  cout << ans << endl;
}
