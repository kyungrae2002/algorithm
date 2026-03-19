#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	int i = 0;
	vector<int> v = {};
	while (i < N) {
		string command;
		int n;
		cin >> command;
		if (command == "push") {
			cin >> n;
			v.push_back(n);
		}
		else if (command == "pop") {
			if (v.size() == 0) {
				cout << -1 << '\n';
			}
			else {
				cout << v[v.size() - 1] << '\n';
				v.pop_back();
			}
		}
		else if (command == "empty") {
			if (v.size() == 0) {
				cout << 1 << '\n';
			}
			else { cout << 0 << '\n'; }
		}
		else if (command == "size") {
			cout << v.size() << '\n';
		}
		else {
			if (v.size() <= 0) { cout << -1 << '\n'; }
			else { cout << v[v.size() - 1] << '\n'; }
		}
		i++;
	}
}