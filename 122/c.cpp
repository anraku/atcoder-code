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
  vector<int> arr(n+1);
  
  rep (i, n-1){
    if(s.substr(i,2) == "AC")
      arr[i+1] = arr[i] + 1;
    else
      arr[i+1] = arr[i];
  }

  rep(i, q) {
    int l, r;
    cin >> l >> r;
    l--; r--;
    cout << arr[r] - arr[l] << endl;
  }
}