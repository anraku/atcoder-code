#include<bits/stdc++.h>
using namespace std;

int main() {
	list<int> li;

	li.push_front(1);
	cout << li.front() << endl;
	li.pop_front();
	cout << li.front() << endl;
}
