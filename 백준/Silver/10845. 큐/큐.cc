#include <iostream>
using namespace std;
const int MAX = 10000;
int q[MAX]{};
int head, tail = 0;
int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string cmd; int n;
		cin >> cmd;
		if (cmd == "push") {
			cin >> n;
			q[tail++] = n;
		}
		else if (cmd == "size") {
			cout << tail - head << '\n';
		}
		else if (cmd == "empty") {
			if (tail - head == 0) {
				cout << 1 << '\n';
			} else { cout << 0  << '\n'; }
		}
		else if (cmd == "front") {
			if (tail - head == 0) {
				cout << -1 << '\n';
			}
			else {
				cout << q[head] << '\n';
			}
		}
		else if (cmd == "back") {
			if (tail - head == 0) 
				cout << -1 << '\n';
			else
			cout << q[tail - 1] << '\n';
		}
		else if (cmd == "pop") {
			if (head != tail) {
				cout << q[head++] << '\n';
			}
			else { cout << -1 << '\n'; }
		}
	}
}