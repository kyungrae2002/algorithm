#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N;
	cin >> N;
	vector<int> stack{};
	vector<char> answer{};
	int cur = 1;
	for (int i = 0; i < N; i++) {
		int m;
		cin >> m;
		while (stack.size() == 0 || stack[stack.size() - 1] < m) {
			stack.push_back(cur++);
			answer.push_back('+');
		}
		if (stack[stack.size() - 1] == m) {
			stack.pop_back();   
			answer.push_back('-');
		}		
		else {
			cout << "NO" << '\n';
			return 0;
		}
	}

	for (char el : answer) {
		cout << el << '\n';
	}
}