#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int MAX = 2000000;
int Q[MAX]{};
int head = 0;
int tail = 0;

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int m = 0;
			cin >> m;
			Q[tail++]= m;
		}
		else if (cmd == "pop") {
			if (tail != head) {
				cout << Q[head] << '\n';
				head++;
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (cmd == "size") {
			cout << tail - head << '\n';
		}
		else if (cmd == "empty") {
			if (tail == head) {
				cout << 1 << '\n';
			}
			else { cout << 0 << '\n'; }
		}
		else if (cmd == "front") {
			if (tail != head) {
				cout << Q[head] << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (cmd == "back") {
			if (tail != head) {
				cout << Q[tail - 1] << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}
}