#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	long long N;
	cin >> N;
	long long tot = 0;
	vector<long long> stack = {};
	for (int i = 0; i < N; i++) {
		long long m = 0;
		cin >> m;
		if (i == 0) {
			stack.push_back(m);
		}
		else {
			while (stack.size() != 0 && stack[stack.size() - 1] <= m) {
				stack.pop_back();
			}
			tot += stack.size();
			stack.push_back(m);
		}
	}
	cout << tot;
}