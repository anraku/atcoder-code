#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i < n;i++)
typedef long long ll;

using namespace std;

bool isPrime(int num)
{
  if (num < 2) return false;
  else if (num == 2) return true;
  else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

  double sqrtNum = sqrt(num);
  for (int i = 3; i <= sqrtNum; i += 2)
  {
    if (num % i == 0)
    {
      // 素数ではない
      return false;
    }
  }

  // 素数である
  return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

  int n;
  cin >> n;
  vector<pair<int,int>> p(n);
  vector<int> c(100001);
  rep(i, n) {
    cin >> p[i].first >> p[i].second;
  }

  int count = 0;
  for(int i = 1;i<100001;i++) {
    if(isPrime(i) && isPrime((i+1)/2))
      count++;
    c[i] = count;
  }

  rep(i, n) {
    int ans = c[p[i].second] - c[p[i].first-1];
    cout << ans << endl;
  }
}
