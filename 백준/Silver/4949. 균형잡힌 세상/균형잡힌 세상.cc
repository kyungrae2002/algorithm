#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	while (true) {
		stack<char> check{};
		bool exit = false;
		string sent;
		getline(cin, sent);
		if (sent== "." && sent.size() == 1) return 0;
		for (int i = 0; i < sent.size(); i++) {
			if (sent[i] == '(' || sent[i] == '[') check.push(sent[i]);
			else if (!check.empty() && sent[i] == ')') {
				if (check.top() == '(') 
					check.pop();
				else {
					exit = true;
				}
			}
			else if (!check.empty() && sent[i] == ']') {
				if (check.top() == '[') 
					check.pop();
				else {
					exit = true;
					check.push(']');
				}
			}
			else if (sent[i] == ')' || sent[i] == ']') exit = true;
			if (exit == true) {
				cout << "no" << '\n';
				break;
			}
		}
		if (!exit && check.empty()) cout << "yes" << '\n';
		else if (!exit && !check.empty()) cout << "no" << '\n';
	}
}