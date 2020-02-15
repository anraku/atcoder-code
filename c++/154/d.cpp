#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i < n;i++)

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,k;
	cin >> n >> k;
	vector<int> p(n);
	rep(i,n) cin >> p[i];
	rep(i,n) p[i]++;
	int s = 0;
	queue<int> q;
	int mx;
	rep(i,n) {
		s += p[i];
		q.push(p[i]);
		if (q.size() > k) {
			s -= q.front(); q.pop();
		}
		if (q.size() == k) {
			mx = max(mx, s);
		}
	}
	double ans = mx;
	ans /= 2;
	printf("%.10f\n", ans);
	return 0;
}
