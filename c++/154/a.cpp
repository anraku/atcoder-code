#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s,t;
	cin >> s >> t;
	int a, b;
	cin >> a >> b;
	string u;
	cin >> u;

	if (s == u){
		a--;
	} else {
		b--;
	}
	cout << a << ' ' << b << endl;
}
