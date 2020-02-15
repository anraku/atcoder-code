#include <bits/stdc++.h>

using namespace std;

int sum_arr(vector<int> arr) {
	int res;
	for (int i=0;i<arr.size();i++){
		res += arr[i];
	}
	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> arr(3);
	for (int i=0;i<arr.size();i++){
		cin >> arr.at(i);
	}
	cout << sum_arr(arr) << endl;
}
