#include <iostream>
#include <vector>
using namespace std;

int main() {
	int K;
	cin >> K;
	int i = 0;
	vector<int> v;
	while (i < K) {
		int N;
		cin >> N;
		if (N == 0) {
			if (v.size() != 0) { v.pop_back(); }
		}
		else {
			v.push_back(N);
		}
		i++;
	}
	int total = 0;
	for (int el : v) {
		total += el;
	}
	cout << total;
}