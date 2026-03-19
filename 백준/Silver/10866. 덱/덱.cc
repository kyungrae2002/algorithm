#include <iostream>
using namespace std;

int main(void) {

	const int max = 10000;
	int head = 10000;
	int tail = 10000;
	int dq[2 * max + 1]{};

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string cmd;
		cin >> cmd;
		if (cmd == "push_back") {
			int m = 0;
			cin >> m;
			dq[tail++] = m;
		}
		else if (cmd == "push_front") {
			int m = 0;
			cin >> m;
			dq[--head] = m;
		}
		else if (cmd == "front") {
			if (tail != head)
				cout << dq[head] << '\n';
			else {
				cout << -1 << '\n';
			}
		}
		else if (cmd == "back") {
			if (tail != head)
				cout << dq[tail - 1] << '\n';
			else {
				cout << -1 << '\n';
			}
		}
		else if (cmd == "pop_front") {
			if (tail != head) {
				cout << dq[head] << '\n';
				head++;
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (cmd == "pop_back") {
			if (tail != head) {
				cout << dq[tail - 1] << '\n';
				tail--;
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (cmd == "size")
			cout << tail - head << '\n';
		else if (cmd == "empty") {
			if (tail == head) {
				cout << 1 << '\n';
			}
			else
				cout << 0 << '\n';
		}
	}
}