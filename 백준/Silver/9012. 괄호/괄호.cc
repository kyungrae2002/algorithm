#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int main(void) {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		string p;
		cin >> p;
		vector<char>stack{};
		for (char pp : p) {
			if (pp == '(') {
				stack.push_back('(');
			}
			else {
				if (stack.empty()) {
					stack.push_back(')');
					//추가한 이유는 empty에 걸려야 하니까
					break;
				}
				else if (stack[stack.size() - 1] == '(') {
					stack.pop_back();
				}
			}
		}
		if (stack.empty())
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
}