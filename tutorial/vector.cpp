#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int> a(5);
	cout << a.size() << endl;
	for (int i = 0; i< a.size();i++){
		a[i] = i;
	}
	cout << a[4] << endl;
	cout << a.front() << a.back() << endl;
	a.push_back(2);
	cout << a.back() << endl;
}
