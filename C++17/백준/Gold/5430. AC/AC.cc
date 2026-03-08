#include <iostream>
#include <vector>
#include <string>
#include <deque>
using namespace std;
int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int T;	cin >> T;
	for (int i = 0; i < T; i++) {
		deque<int> dq= {}; 
		string p; cin >> p;
		int n;cin >> n;
		string list;cin >> list;
		string num = "";
		for (int k = 0; k < list.size(); k++) {
			if (isdigit(list[k]))
				num += list[k];
			if (list[k] == ',' || list[k] == ']') {
				if (!num.empty()) {
					dq.push_back(stoi(num));
					num = "";
				}
			}
		}
		int reversed_ = 0;
		int loc = 0;
		bool iserror = false;
		while(loc < p.size() && !iserror){
			int count = 0;
			if (p[loc] == 'R') {
				while (p[loc] == 'R') {
					loc++;
					count++;
				}
				if (count % 2 != 0)
					reversed_ += 1;
				count = 0;
			}
			if (p[loc] == 'D') {
				while (p[loc] == 'D') {
					loc++;
					count++;
				}
				if (dq.size() == 0) {
					cout << "error" << '\n';
					iserror = true;
					break;
				}
				if (reversed_%2==1) {
					while (count-- != 0) {
						if (dq.empty())
						{
							cout << "error" << '\n';
							iserror = true;
							break;
						}
						else
							dq.pop_back();
					}
				}
				else {
					while (count-- != 0)
					{
						if (dq.empty())
						{
							cout << "error" << '\n';
							iserror = true;
							break;
						}
						else 
							dq.pop_front();
					}
				}
			}
		}
		if (!iserror) {
			cout << '[';
			if (dq.size() == 0) {
				cout << ']' << '\n';
			}
			if (reversed_ % 2 == 1) {
				while (dq.size()) {
					cout << dq[dq.size() - 1];
					dq.pop_back();
					if (dq.size() != 0)
						cout << ',';
					else
						cout << ']' << '\n';
				}
			}
			else {
				while (dq.size()) {
					cout << dq[0];
					dq.pop_front();
					if (dq.size() != 0)
						cout << ',';
					else
						cout << ']' << '\n';
				}
			}
		}
	}
}