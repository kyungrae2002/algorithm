#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> arr;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int cmd;
		cin >> cmd;
		if (cmd == 1) {
			int m;
			cin >> m;
			arr.push_back(m);
		}
		else if (cmd == 2) {
			if (arr.size() == 0) {
				cout << -1 << '\n';
			}
			else {
				cout << arr[arr.size() - 1] << '\n';
				arr.pop_back();
			}
		}
		else if (cmd == 3) {
			cout << arr.size() << '\n';
		}
		else if (cmd == 4) {
			if (arr.size() == 0) {
				cout << 1 << '\n';
			}
			else { cout << 0 << '\n'; }
		}
		else{
			if (arr.size() == 0) { cout << -1 << '\n'; }
			else { cout << arr[arr.size() - 1] << '\n'; }
		}
	}
}