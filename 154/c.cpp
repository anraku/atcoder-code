#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	map<int,int> m;
	int n;
	cin >> n;
	int a;
	for (int i=0;i<n;i++){
		cin >> a;
		if (m[a] == 1){
			cout << "NO" << endl;
			return 0;
		} else {
			m[a] = 1;
		}
	}
	cout << "YES" << endl;
}
