#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(0);
	int N;
	cin >> N;
	vector<int> stack{};
	vector<int> save{};
	int cur = 1;
	for (int i = 0; i < N; i++) {
		int m = 0;
		cin >> m;
		if (!stack.empty()) {
			while (!stack.empty() && stack[stack.size() - 1] < m) {
				stack.pop_back();
				save.pop_back();
			}
		}
		if (stack.size() == 0) {
			cout << 0 << ' ';
		}
		else {
			cout << save[stack.size() - 1] << ' ';
		}
		stack.push_back(m);
		save.push_back(cur);
		cur++;
	}
}